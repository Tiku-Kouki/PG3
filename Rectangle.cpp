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
	printf("�Z�`�̖ʐς�%d\n", answer);
}
