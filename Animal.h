#pragma once
#include<stdio.h>
class Animal
{
public:
	Animal();
	virtual ~Animal();

	//void Bark();

	//���z�֐�
	virtual void Bark();


protected:

	const char* name_;

};

