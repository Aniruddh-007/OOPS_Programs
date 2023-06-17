//Fahrenheit to Celcius
#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celcius
float Conversion(float n)
{
	return (n - 32.0) * 5.0 / 9.0;
}

int main()
{
	float n = 40;
	cout << Conversion(n);
	return 0;
}
