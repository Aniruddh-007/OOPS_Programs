//SIMPLE INTEREST
#include<iostream>
using namespace std;

int main()
{
  //Getting inputs from user
  cout<<"Enter P : ";
	cin>>P;
  cout<<"Enter N : ";
  cin>>N;
  cout<<"Enter R : ";
  cin>>R;

	// Calculate simple interest
	float SI = (P * T * R) / 100;
  
  cout << "Simple Interest = " << SI;

	return 0;
}
