#include <iostream>
#include "grid.h"
using namespace std;

int tempWidth, tempHeight;
//char key;

void gridWidth() {
	cout << "Grid width (min 2, max 50): ";
	cin >> tempWidth;
	if (tempWidth < 2 && tempWidth > 50) {
		cout << "Invalid size!" << endl;
		gridWidth();
	}
	width = tempWidth;
}

void gridHeight() {
	cout << "Grid height (min 2, max 50): ";
	cin >> tempHeight;
	if (tempHeight < 2 && tempHeight > 50) {
		cout << "Invalid size!" << endl;
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