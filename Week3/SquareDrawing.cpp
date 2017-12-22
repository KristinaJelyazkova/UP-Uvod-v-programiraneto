#include<iostream>
#include<math.h>
#include"Header.h"
using namespace std;

int wmain() {
	setColor(255, 0, 0);

	for (int x = 0; x < 200; x++) {
		drawPixel(20 + x, 20);
	}

	for (int x = 0; x < 200; x++) {
		drawPixel(20, 20 + x);
	}

	for (int x = 0; x < 200; x++) {
		drawPixel(20 + x, 220);
	}

	for (int x = 0; x < 200; x++) {
		drawPixel(220, 20 + x);
	}

	updateGraphics();
	system("pause");
	return 0;
}