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

};

