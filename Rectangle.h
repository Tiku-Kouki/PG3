#pragma once
#include "IShape.h"
#include<stdio.h>
class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	//仮想関数
	void size() override;
	//仮想関数
	void draw() override;

private:

	int answer;

	const int bottom = 10;
	const int height = 30;
	const float radius = 5;

};

