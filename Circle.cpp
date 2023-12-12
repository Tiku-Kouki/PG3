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
	printf("îºåa:%0.1f\n", radius);

	printf("â~ÇÃñ êœÇÕ%0.1f\n", answer);

}
