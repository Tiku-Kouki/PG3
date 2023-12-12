#pragma once
#include "IShape.h"
#include<stdio.h>
class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	//âºëzä÷êî
	void size() override;
	//âºëzä÷êî
	void draw() override;

private:

	int answer;

	const int bottom = 10;
	const int height = 30;
	const float radius = 5;

};

