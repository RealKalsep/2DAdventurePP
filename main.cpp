#include <iostream>
#include "grid.h"

int tempWidth, tempHeight;
//char key;

void gridWidth() {
	std::cout << "Grid width (min 2, max 50): ";
	std::cin >> tempWidth;
	if (tempWidth < 2 || tempWidth > 50) {
		std::cout << "Invalid size!" << std::endl;
		gridWidth();
	}
	width = tempWidth;
}

void gridHeight() {
	std::cout << "Grid height (min 2, max 50): ";
	std::cin >> tempHeight;
	if (tempHeight < 2 || tempHeight > 50) {
		std::cout << "Invalid size!" << std::endl;
		gridHeight();
	}
	height = tempHeight;
}

int main() {
	gridWidth();
	gridHeight();
	grid();
	return 1;
}