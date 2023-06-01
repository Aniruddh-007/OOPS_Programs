/*
There is a base class named shape. This base class has features such as length, breadth and height.
There are sub-classes namely square , rectangle , triangle, circle and parallelogram.
Inherit the base class in the sub classes and find out the area of each shape and use contructors.
*/

#include <iostream>
using namespace std ;

class shape
{
    protected :
    int length , breadth , height ;
};

class square : public shape 
{
    public :
    square(int x)
    {
        length = x ;
    }
    int area()
    {
        return length * length ;
    }
};

class rectangle : public shape
{
    public :
    rectangle(int x , int y)
    {
        length = x ;
        breadth = y ;
    }
    int area()
        {
            return length * breadth ;
        }
};

class triangle : public shape
{
    public :
    triangle(int x , int y)
    {
        length = x ;
        breadth = y ;
    }
    float area()
    {
        return (0.5) * length * breadth;
    }
};

class circle : public shape
{
    public :
    circle(int radius)
    {
        length = radius ;
    }
    float area()
    {
        return (3.14) * length * length ;
    }
};

class parallelogram : public shape
{
    public :
    parallelogram(int a , int b)
    {
        height = a ;
        breadth = b ;
    }
    int area()
    {
        return height * breadth ;
    }
};

int main() 
{
    //Area Square
    square s(2);
    cout<<"Area of Square : "<<s.area()<<endl;
    
    //Area Rectangle
    rectangle r(2 , 4);
    cout<<"Area of Rectangle : "<<r.area()<<endl;
    
    //Area Triangle
    triangle t(2 , 4);
    cout<<"Area of Triangle : "<<t.area()<<endl;

    //Area Circle    
    circle c(2);
    cout<<"Area of Circle : "<<c.area()<<endl;
    
    //Area Parallelogram
    parallelogram p(2 , 4);
    cout<<"Area of Parallelogram : "<<p.area()<<endl;
    
    return 0;
}
