#pragma once
#include<stdio.h>
class IShape
{
public:


	IShape();
	~IShape();



	//���z�֐�
	virtual void size() = 0;
	//���z�֐�
	virtual void draw() = 0;


protected:

	const int bottom = 10;
	const int height = 20;

};

