#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

const int H = 13;
const int W = 19;


String TileMap[H] = {
"BBBBBBBBBBBBBBBBBBB",
"B                 B",
"B                 B",
"BBBBB             B",
"B   BB            B",
"B                 B",
"B                 B",
"B  BBBBB          B",
"B               BBB",
"B       B         B",
"B              BBBB",
"B           BBBBBBB",
"BBBBBBBBBBBBBBBBBBB",

};

class Object {
public:
	Texture texture;
	Sprite image;
	float x = 0;
	float y = 0;
	float width = 0;
	float height = 0;
	float mass = 0;
	Vector2f velocity;
	bool moving = false;
	bool can_collide = false;

	Object(string filename) {
		texture.loadFromFile(filename);
		image.setTexture(texture);
		width = texture.getSize().x;
		height = texture.getSize().y;
		image.setOrigin(width / 2, height / 2);

		x = image.getPosition().x;
		y = image.getPosition().y;

		velocity = Vector2f();
		velocity.x = 0.;
		velocity.y = 0.;
	};
	~Object() {};
	void Move(float new_x, float new_y) {
		image.setPosition(new_x, new_y);
		x = new_x;
		y = new_y;
	};
	void setImage(string filename) {
		texture.loadFromFile(filename);
		image.setTexture(texture);
	};
	void setScale(float x_scale, float y_scale) {
		image.setScale(x_scale, y_scale);
		width *= x_scale;
		height *= y_scale;
	};

};

int window_width = 1200;
int window_height = 800;
vector <Object> objects;

Object sun("sun.png");



class PLAYER {
public:
	float dx, dy, mass;
	FloatRect rect;
	bool onGround;
	Sprite sprite;
	float currentFrame;
	bool isMove = false;
	PLAYER(Texture& image)
	{
		sprite.setTexture(image);
		rect = FloatRect(7 * 64, 9 * 64, 40, 128);

		dx = dy = 0.01;
		currentFrame = 0;
		mass = 1;
	}

	void update(float time)
	{
		rect.left += dx * time;
		Collision(0);

		if (!onGround && mass != 0) dy = dy + 0.0005 * time;
		rect.top += dy * time;
		onGround = false;
		Collision(1);
		currentFrame += 0.01;
		if (currentFrame > 6) currentFrame -= 6;
		if (dx > 0) sprite.setTextureRect(IntRect(56 * int(currentFrame), 0, 56, 150));
		if (dx < 0) sprite.setTextureRect(IntRect(56 * int(currentFrame) + 56, 0, -56, 150));
		sprite.setPosition(rect.left, rect.top);
		dx = 0;
	}
	void Collision(int dir)
	{
		for (int i = (rect.top / 64); i < (rect.top + rect.height) / 64; i++)
			for (int j = (rect.left / 64); j < (rect.left + rect.width) / 64; j++)
			{
				if (TileMap[i][j] == 'B')
				{
					if ((dx > 0) && (dir == 0)) rect.left = j * 64 - rect.width;
					if ((dx < 0) && (dir == 0)) rect.left = j * 64 + 64;
					if ((dy > 0) && (dir == 1)) { rect.top = i * 64 - rect.height;  dy = 0;   onGround = true; }
					if ((dy < 0) && (dir == 1)) { rect.top = i * 64 + 64;   dy = 0; }
				}
			}
	}
};


int main()
{
	RenderWindow window(VideoMode(window_width, window_height), "SFML works!");
	objects.push_back(sun);
	objects[0].Move(window_width / 2, sun.height / 2);

	Texture t;
	t.loadFromFile("walk.png");

	float currentFrame = 0;

	PLAYER p(t);

	Clock clock;
	RectangleShape rectangle(Vector2f(64, 64));
	float X = 0, Y = 0;//для мыши

	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();

		time = time / 400;

		if (time > 20) time = 20;
		Event event;
		Vector2i pixelPos = Mouse::getPosition(window);
		Vector2f pos = window.mapPixelToCoords(pixelPos);
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			p.dx = -0.1;
		}
		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			p.dx = 0.1;
		}
		if (Keyboard::isKeyPressed(Keyboard::Up))
		{
			if (p.onGround) { p.dy = -0.5; p.onGround = false; }
		}
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		if (event.type == Event::MouseButtonPressed)//если нажата клавиша мыши
			if (event.key.code == Mouse::Left)
				if (p.sprite.getGlobalBounds().contains(pos.x, pos.y))
				{
					X = pos.x - p.sprite.getPosition().x;
					Y = pos.y - p.sprite.getPosition().y;
					p.isMove = true;
					p.onGround = true;
				}
		if (event.type == Event::MouseButtonReleased)//если отпустили клавишу
			if (event.key.code == Mouse::Left)
				p.isMove = false;
		if (p.isMove) {

			p.rect.left = pos.x - X;
			p.rect.top = pos.y - Y;
			p.dy = 0;
		}
		p.update(time);
		window.clear(Color::White);
		for (int i = 0; i < int(objects.size()); i++) {
			window.draw(objects[i].image);
		}
		for (int i = 0; i < H; i++)
			for (int j = 0; j < W; j++)
			{
				if (TileMap[i][j] == 'B') rectangle.setFillColor(Color::Black);

				if (TileMap[i][j] == ' ') continue;

				rectangle.setPosition(j * 64, i * 64);
				window.draw(rectangle);
			}
		window.draw(p.sprite);
		window.display();
	}
	return 0;
}