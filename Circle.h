#pragma once
#include "IShape.h"
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

	int answer;


};

