#include "Circle.h"
#include <math.h>
#define M_PI 3.14159

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::size()
{
	
	answer = (radius * radius) * float(M_PI);
	
}

void Circle::draw()
{
	printf("���a:%0.1f\n", radius);

	printf("�~�̖ʐς�%0.1f\n", answer);

}
