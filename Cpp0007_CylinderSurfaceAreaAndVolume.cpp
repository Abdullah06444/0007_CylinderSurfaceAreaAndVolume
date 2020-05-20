#define _USE_MATH_DEFINES
#include <iostream>
#define Feet 3.2808399
using namespace std;

int main()
{
	float radius, high;
	float result, result2;
	cout << "Type the radius of cylinder: ";
	cin >> radius;
	cout << "Type the high of cyclinder: ";
	cin >> high;

	result = 2 * M_PI * radius * (high+radius);
	result2 = M_PI * radius * radius * high;

	cout << "The surface area of cylinder is " << result << " meters^2 and " << result * Feet * Feet << " feets^2." << endl;
	cout << "The volume of cylinder is " << result2 << " meters^3 and " << result2 * Feet * Feet * Feet << " feets^3.\n";

	return 0;
}
