// COMPOUND INTEREST
#include <iostream>
using namespace std;
int main()
{
  float p , r , t ;
	cout << "Enter Principle : ";
  cin  << P ;
	cout << "Enter Rate : ";
  cin  << r ;
	cout << "Enter Time : ";
  cin  << t ;
	// Calculate compound interest
	float A = principal * ((pow((1 + rate / 100), time)));
	float CI = A - principal;

	cout << "Compound interest is " << CI;

	return 0;
}
