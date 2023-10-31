#include "Cat.h"

Cat::Cat()
{
	name_ = "”L";
	printf("%s‚ªŒ»‚ê‚½\n", name_);

	
}

Cat::~Cat()
{
	printf("%s‚ª‹Ž‚Á‚½\n", name_);
}

void Cat::Bark()
{
	
	printf("%s‚ª–Â‚¢‚½\n", name_);

}
