#include <SFML/Graphics.hpp>
#include <vector>

int main () {
	int window_width = 1200, window_height = 800;
	sf::RenderWindow window(sf::VideoMode(window_width, window_height), "Window title");
	/*sf::RenderWindow window(sf::VideoMode({200, 200}, 32),
	"SFML Works!",
	sf::Style::Titlebar | sf::Style::Close);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear(sf::Color(50, 50, 50));
		window.draw(shape);
		window.display();
	}*/

	return 0;
}
