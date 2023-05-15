// AREA OF RECTANGLE
#include<iostream>
using namespace std;
class Area
{
	int L ;
	int B ;
	int A ;
	public:
	Area()
	{
		cout<<"Enter the Length : ";
		cin>>L;
		cout<<"Enter the Breadth : ";
		cin>>B;
		A = L * B ;
	}

	void display()
	{
		cout<<"The Area of Rectangle is : "<<A;
	}
};

int main()
{
	Area A ; //constructor gets called automatically when we create the object of the class
	A.display();
	return 0;
}
