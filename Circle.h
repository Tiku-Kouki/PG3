#pragma once
#include "IShape.h"
#include<stdio.h>
class Circle:public IShape
{
	

public:

	Circle();
	~Circle();
	//仮想関数
	void size() override;
	//仮想関数
	void draw() override;

private:

	int answer;


};

