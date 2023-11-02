#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	Cat();
	
	~Cat() override;

	void Bark() override;

private:
	

};

