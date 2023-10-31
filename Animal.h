#pragma once
#include<stdio.h>
class Animal
{
public:
	Animal();
	virtual ~Animal();

	//void Bark();

	//âºëzä÷êî
	virtual void Bark();


protected:

	const char* name_;

};

