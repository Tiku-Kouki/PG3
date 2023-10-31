#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::size()
{
	answer = (bottom * height);
}

void Rectangle::draw()
{
	printf("’ZŒ`‚Ì–ÊÏ‚Í%d\n", answer);
}
