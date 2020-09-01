#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#define Feet 3.2808399

int main()
{
	float radius, high;
	float result, result2;
	printf("Type the radius of cylinder: ");
	scanf("%f", &radius);
	printf("Type the high of cyclinder: ");
	scanf("%f", &high);

	result = 2 * M_PI * radius * (high + radius);
	result2 = M_PI * radius * radius * high;

	printf("The surface area of cylinder is %f meters^2 and %f feets^2.\n", result, result * Feet * Feet);
	printf("The volume of cylinder is %f meters^3 and %f feets^3.\n", result2, result2 * Feet * Feet * Feet);

	return 0;
}