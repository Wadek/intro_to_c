#include <stdio.h>

int main() 
{
	int rad;
	printf("please enter a raduis: ");
	scanf("%i", &rad);

	double area = 3.14159 * (rad * rad);
	
	printf("The area of a circle with %i radius is %f\n", rad,area);

	return 0;
}

