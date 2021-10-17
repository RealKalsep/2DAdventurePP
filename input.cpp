#include <iostream>
#include "input.h"

char key;

int input() {
	std::cin >> key;

	switch (key) {
	case 'w':
		playerY--;
		break;

	case 's':
		playerY++;
		break;

	case 'a':
		playerX--;
		break;

	case 'd':
		playerX++;
		break;

	default:
		std::cout << "Invalid key";
	}
	return 1;
}