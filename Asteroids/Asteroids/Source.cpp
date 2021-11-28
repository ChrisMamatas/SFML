#include <SFML/Graphics.hpp>

int main() {
	// Open a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");

	// Run the program while the window is open
	while (window.isOpen()) {
		sf::Event event;

		// Close the window
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear the window to black
		window.clear(sf::Color::Black);

		sf::RectangleShape rect(sf::Vector2f(100.0f, 100.0f));
		window.draw(rect);

		


		window.display();
	}

	return 0;
}