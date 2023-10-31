#pragma once
#include "IShape.h"
#include<stdio.h>
class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	//‰¼‘zŠÖ”
	void size() override;
	//‰¼‘zŠÖ”
	void draw() override;

private:

	int answer;

};

