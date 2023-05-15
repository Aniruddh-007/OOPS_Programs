// VOLUME OF CUBE
#include<iostream>
using namespace std;
class Volume
{
	int L ;
	int volume ;
	public:
	Volume()
	{
		cout<<"Enter the Length : ";
		cin>>L;
		volume = L * L * L ;
	}

	void display()
	{
		cout<<"The Volume of CUBE is : "<<volume;
	}
};

int main()
{
	Volume V ; //constructor gets called automatically when we create the object of the class
	V.display();
	return 0;
}
