#include "Cat.h"

Cat::Cat()
{
	name_ = "�L";
	printf("%s�����ꂽ\n", name_);

	
}

Cat::~Cat()
{
	printf("%s��������\n", name_);
}

void Cat::Bark()
{
	
	printf("%s������\n", name_);

}
