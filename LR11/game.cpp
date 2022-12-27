#include <vector>
#include <SFML/Graphics.hpp>

using namespace sf;
float frame = 0;

int main() {

    //создание окна с разрешением 1200 на 800  название окна  убирает таскбар
    RenderWindow window(VideoMode(1200, 800), "SFML Project", Style::None);

    //параметры игрока
    Image image;
    image.loadFromFile("image/player.png");
    Texture herotexture;
    herotexture.loadFromImage(image);
    Sprite player;
    player.setTexture(herotexture);
    player.setPosition(100, 650);
    player.setTextureRect(IntRect(0, 0, 31, 32));
    int playerDirection = 0;

    //реализация фона
    Image fon;
    fon.loadFromFile("image/fon.png");
    Texture back;
    back.loadFromImage(fon);
    Sprite background;
    background.setTexture(back);
    background.setTextureRect(IntRect(0, 0, 1920, 1080));
    background.setOrigin(960, 540);
    background.setPosition(600, 300);

    //реализация дороги
    Image flat;
    flat.loadFromFile("image/road.png");
    Texture roadFl;
    roadFl.loadFromImage(flat);
    Sprite road;
    road.setTexture(roadFl);
    road.setTextureRect(IntRect(0, 0, 1200, 120));
    road.setOrigin(600, 527);
    road.setPosition(600, 1200);

    //реализация квадрата
    Image cube;
    cube.loadFromFile("image/brick.png");
    Texture square;
    square.loadFromImage(cube);
    Sprite platform;
    platform.setTexture(square);
    platform.setTextureRect(IntRect(0, 0, 150, 150));
    platform.setOrigin(0, 0);
    platform.setPosition(1000, 525);




    Clock clock;


    bool onGround = true;
    double dy = 0;
    bool grab = false;
    Vector2i click_pos;
    double elapsed = clock.restart().asMilliseconds();


    //дефолтный цикл в котором отрисовывается вся геометрия(имеет общую модель построения)
    while (window.isOpen())
    {
        //просчет времени кадра для относительной плавности
        float time = clock.getElapsedTime().asMilliseconds();
        clock.restart();

        time = time / 1500;

        Event event;
        while (window.pollEvent(event)) {

            if (event.type == Event::Closed)
                window.close();

            //тригер нажатия кнопки мыши и реализация перетаскивания игрока
            if (event.type == Event::MouseButtonPressed) {
                if (event.mouseButton.button == Mouse::Button::Left) {
                    Vector2i mouse_pos = Mouse::getPosition() - window.getPosition();
                    Vector2f player_pos = player.getPosition();
                    auto dist = (mouse_pos.x - player_pos.x) * (mouse_pos.x - player_pos.x) + (mouse_pos.y - player_pos.y) * (mouse_pos.y - player_pos.y);

                    if (dist <= 1024) {
                        grab = true;
                        click_pos = Vector2i(player_pos.x - mouse_pos.x, player_pos.y - mouse_pos.y);
                    }
                }
            }
            //тригер отжатия кнопки мыши 
            if (event.type == Event::MouseButtonReleased) {
                if (grab == true) {
                    grab = false;
                    onGround = false;
                    if (!onGround) {
                        dy += time * 8;
                    }
                    player.move(0, dy);

                }

            }

        }


        //нахождение координат позиции мыши и игрока и нахождение расстояния по теореме пифагора(функция pow() здесь не используется)
        Vector2i mouse_pos = Mouse::getPosition() - window.getPosition();
        Vector2f player_pos = player.getPosition();
        auto dist = (mouse_pos.x - player_pos.x) * (mouse_pos.x - player_pos.x) + (mouse_pos.y - player_pos.y) * (mouse_pos.y - player_pos.y);



        //телепортирование игрока к курсору мыши
        if (grab) {
            player.setPosition(mouse_pos.x + click_pos.x, mouse_pos.y + click_pos.y);
        }








        //управление 

        //реализация прыжка и его "физики"

        //берем данные игрока, плоскости(дороги) и квадрата
        FloatRect playerBounds = player.getGlobalBounds();
        FloatRect roadmBounds = road.getGlobalBounds();
        FloatRect platformBounds = platform.getGlobalBounds();


        //работаем с их пересечениями
        if (playerBounds.intersects(roadmBounds)) {
            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
                onGround = false;
                playerDirection = 2;
                dy = -0.7;
            }

        }
        if (playerBounds.intersects(platformBounds)) {
            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
                onGround = false;
                playerDirection = 2;
                dy = -0.7;
            }

        }


        if (!onGround) {
            dy += time * 8;
        }
        player.move(0, dy);

        if (player.getPosition().y > 650) {
            onGround = true;
            dy = 0;
        }

        //реализация квадрата и его физики

        if (playerBounds.intersects(platformBounds)) {
            if (player.getPosition().y >= platform.getPosition().y) {
                if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
                    playerDirection = -1;
                    player.move(1, 0);
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
                    playerDirection = 1;
                    player.move(-1, 0);
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
                    playerDirection = -1;
                    dy = -8 * time;
                    player.move(0, dy);

                }
            }
            if (player.getPosition().y <= platform.getPosition().y) {
                dy = -1;
                if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
                    dy = -1 * time;
                    player.move(0, dy);
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
                    playerDirection = -1;
                    player.move(-0.4, 0);
                }
                if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
                    playerDirection = 1;
                    player.move(0.4, 0);

                }

            }





        }






        //релизация движения в стороны
        if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
            playerDirection = -1;
            player.move(-0.4, 0);
            frame += 0.005 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 96, 31, 32));

        }
        if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
            playerDirection = 1;
            player.move(0.4, 0);
            frame += 0.005 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 32, 31, 32));

        }

        //чтобы игрок не выходил за пределы окна слева и справа
        do {
            player.move(0.7, 0);
        } while (player.getPosition().x <= 2);

        do {
            player.move(-0.7, 0);
        } while (player.getPosition().x >= 1168);


        //чтобы игрок не вылетал за верхнюю границу
        if (player.getPosition().y <= 5) {
            player.move(0, 1);
        }




        //отрисовка окна, игрока и плоскости
        window.clear();
        window.draw(background);
        window.draw(road);
        window.draw(platform);
        window.draw(player);
        window.display();
    }
    return 0;
}