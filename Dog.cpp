#include "Dog.h"

Dog::Dog()
{
	name_ = "��";
	printf("%s�����ꂽ\n", name_);

}

Dog::~Dog()
{
	printf("%s��������\n", name_);
}

void Dog::Bark()
{
	printf("%s������\n", name_);
}
