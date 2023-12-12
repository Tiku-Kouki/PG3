#pragma once
#include "IShape.h"
#include<stdio.h>
class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	//���z�֐�
	void size() override;
	//���z�֐�
	void draw() override;

private:

	int answer;

	const int bottom = 10;
	const int height = 30;
	const float radius = 5;

};

