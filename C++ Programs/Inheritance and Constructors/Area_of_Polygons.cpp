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
        int area()
        {
            return length * breadth ;
        }
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
}
int main() 
{
    square s(10);
    cout<<s.area();
    return 0;
}
