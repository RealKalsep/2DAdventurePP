#include <iostream>
#include "grid.h"
#include "input.h"

// ▀▄█▌▐░▒▓
int width = 10, height = 5;
int playerX = 2, playerY = 3;
char terrain = '#', player = 'O';

void grid() {
	for (int i = 0; i < 23; i++) {
		std::cout << std::endl;
	}
	std::cout << "X: " << playerX << ", Y: " << playerY << std::endl;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			if (x == width) { x = 0; } // i am officially suffering, help me i don't know what to do i'm stuck i hate this
			if (x == playerX && y == playerY) {
				std::cout << player;
			}
			else {
				std::cout << terrain;
			}
		}
		std::cout << terrain << std::endl;
	}

	input();
	grid();
}