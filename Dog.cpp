#include "Dog.h"

Dog::Dog()
{
	name_ = "犬";
	printf("%sが現れた\n", name_);

}

Dog::~Dog()
{
	printf("%sが去った\n", name_);
}

void Dog::Bark()
{
	printf("%sが鳴いた\n", name_);
}
