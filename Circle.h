#pragma once
#include "IShape.h"
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

	int answer;


};

