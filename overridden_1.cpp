#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;

class shape
{
protected:
    string name;

public:
    virtual double area() = 0;
    virtual void display() = 0;
};

class circle : public shape
{
private:
    double radius;

public:
    circle(string n, double r)
    {
        name = n;
        radius = r;
    }
    double area()
    {
        return PI * radius * radius;
    }
    void display()
    {
        cout << "The shape is " << name << " and its area is " << area() << endl;
    }
};

class rectangle : public shape
{
private:
    double length, width;

public:
    rectangle(string n, double l, double w)
    {
        name = n;
        length = l;
        width = w;
    }
    double area()
    {
        return length * width;
    }
    void display()
    {
        cout << "The shape is " << name << " and its area is " << area() << endl;
    }
};

class triangle : public shape
{
private:
    double height, base;

public:
    triangle(string n, double h, double b)
    {
        name = n;
        height = h;
        base = b;
    }
    double area()
    {
        return 0.5 * height * base;
    }
    void display()
    {
        cout << "The shape is " << name << " and its area is " << area() << endl;
    }
};

int main()
{
    shape *p1, *p2, *p3;

    p1 = new circle("circle", 5);

    p2 = new rectangle("rectangle", 10, 8);

    p3 = new triangle("triangle", 3, 4);

    p1->display();
    p2->display();
    p3->display();

    return 0;
}