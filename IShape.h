#pragma once
#include<stdio.h>
class IShape
{
public:

	//仮想関数
	virtual void size() = 0;
	//仮想関数
	virtual void draw() = 0;

};

