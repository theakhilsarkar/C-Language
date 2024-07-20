// Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle,and then call the area() function using these two objects.
#include<iostream>
using namespace std;

class Shape
{
    protected : 

    void area()
    {
        cout << "Area is : ";
    }
};

class Triangle : public Shape
{
    int b,h;

    public :

    void set(int b,int h)
    {
        this->b = b;
        this->h = h;
    }

    void area()
    {
        cout << "Area is : " << (0.5)*b*h << endl;
    }
};

class Rectangle : public Shape
{
    int l;

    public:

    void set(int l)
    {
        this->l = l;
    }

    void area()
    {
        cout << "Area is : " << l * l << endl;
    }
};

int main()
{
    Triangle t1;
    Rectangle r1;

    t1.set(4,2);
    t1.area();

    r1.set(2);
    r1.area();
    return 0;
}