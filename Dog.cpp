#include "Dog.h"

Dog::Dog()
{
	name_ = "Œ¢";
	printf("%s‚ªŒ»‚ê‚½\n", name_);

}

Dog::~Dog()
{
	printf("%s‚ª‹Ž‚Á‚½\n", name_);
}

void Dog::Bark()
{
	printf("%s‚ª–Â‚¢‚½\n", name_);
}
