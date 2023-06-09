#include <iostream>
using namespace std;

class Shape {
   protected:
    float x,y;

   public:
    
    virtual float calculateArea() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
   public:
   	void getDimension() {
        cin >>x;
    }
    float calculateArea() {
        cout<<"Circle's area is " << 3.14 * x * x << endl ;
    }
    void display() {
        cout << "this is a circle"<< endl;
    }
};

class Rectangle : public Shape {
   public:
   	void getDimension() {
        cin >>x>>y;
    }
    float calculateArea() {
        cout<<"Rectangle's area is " << x * y << endl ;
    }
    void display() {
        cout << "this is a circle" << endl;
    }
};

class Triangle : public Shape {
   public:
   	void getDimension() {
        cin >>x>>y;
    }
    float calculateArea() {
        cout << "Triangle's area is " <<(x * y) / 2<< endl; ;
    }
    void display(){
        cout << "This ia a triangle "<< endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    cout << "Enter radius of circle: ";
    circle.getDimension();
    circle.calculateArea();
    circle.display();

    cout << "Enter length of rectangle: ";
    rectangle.getDimension();
    rectangle.calculateArea();
    rectangle.display();

    cout << "Enter base of triangle: ";
    triangle.getDimension();
	triangle.calculateArea();
    triangle.display();

    return 0;
}