#pragma once
#include<stdio.h>
class IShape
{
public:


	IShape();
	~IShape();



	//âºëzä÷êî
	virtual void size() = 0;
	//âºëzä÷êî
	virtual void draw() = 0;


protected:

	const int bottom = 10;
	const int height = 20;

};

