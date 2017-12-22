#include<iostream>
#include<math.h>
#include"Header.h"
using namespace std;

void drawLine2(int x1, int y1, int x2, int y2) {
	for (int x = x1; x <= x2; x++) {
		int y = (x - x1) * (y2 - y1) / (x2 - x1) + y1;
		drawPixel(x, y);
	}
	//return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); kogato e int i return length;
}

int wmain() {
	setColor(255, 0, 0);

	//int x = drawLine2(100, 200, 200, 100);

	int newx, newy, oldx, oldy;

	for (int x = 0; x < 200; x++) {
		newx = 20 + x;
		newy = 20 + log(x) * 10;
		if (x > 0) drawLine2(newx, newy, oldx, oldy);
		drawPixel(newx, newy);
		oldx = newx;
		oldy = newy;
	}

	updateGraphics();
	system("pause");
	return 0;
}