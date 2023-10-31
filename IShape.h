#pragma once
#include<stdio.h>
class IShape
{
public:


	IShape();
	~IShape();



	//仮想関数
	virtual void size() = 0;
	//仮想関数
	virtual void draw() = 0;


protected:

	const int bottom = 10;
	const int height = 20;

};

