#pragma once
#include "IShape.h"
#define _USE_MATH_DEFINES
#include<stdio.h>





class Circle:public IShape
{
	

public:

	Circle();
	~Circle();
	//���z�֐�
	void size() override;
	//���z�֐�
	void draw() override;

private:

	
	float answer = {};


};

