#include "Cat.h"

Cat::Cat()
{
	name_ = "猫";
	printf("%sが現れた\n", name_);

	
}

Cat::~Cat()
{
	printf("%sが去った\n", name_);
}

void Cat::Bark()
{
	
	printf("%sが鳴いた\n", name_);

}
