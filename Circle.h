#pragma once
#include "IShape.h"
#define _USE_MATH_DEFINES
#include<stdio.h>





class Circle:public IShape
{
	

public:

	Circle();
	~Circle();
	//âºëzä÷êî
	void size() override;
	//âºëzä÷êî
	void draw() override;

private:

	
	float answer = {};

	const int bottom = 10;
	const int height = 30;
	const float radius = 5;
};

