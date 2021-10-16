#include <iostream>
using namespace std;

int width = 10, height = 5;

int main() {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width - 1; x++) {
			cout << "#";
		}
		cout << "#" << endl;
	}
	return 0;
}