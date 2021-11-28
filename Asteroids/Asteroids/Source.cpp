#include <SFML/Graphics.hpp>

int main() {

	// Open a window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Sorting Algorithm Visualized");

	int arraySize = 50;
	int* a = new int[arraySize];

	srand(time(NULL));

	for (int i = 0; i < arraySize; i++)
		a[i] = rand() % 500 + 1;

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

		// Draw the unsorted rectangles
		for (int i = 0; i < arraySize; i++) {
			sf::RectangleShape rect(sf::Vector2f(800 / arraySize, a[i]));
			rect.setPosition(i * (800 / arraySize), 600 - a[i]);
			window.draw(rect);
		}
		

		// BubbleSort
		for (int i = 0; i < arraySize - 1; i++) {
			for (int j = 0; j < arraySize - i - 1; j++) {
				if (a[j] > a[j + 1]) {
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}


		window.display();

	}

	delete[] a;
	return 0;
}