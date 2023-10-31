#include<stdio.h>
#include "Circle.h"
#include "Rectangle.h"




int main() {
	
	
	IShape* shape[2];

	shape[0] = new Circle;
	shape[1] = new Rectangle;
	

	shape[0]->size();
	shape[1]->size();

	shape[0]->draw();
	shape[1]->draw();

	
	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}
