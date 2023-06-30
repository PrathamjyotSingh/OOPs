#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    virtual float area() = 0; 
};

class RightAngleTriangle : public Triangle {
private:
    float base, height;
public:
    RightAngleTriangle(float b, float h) : base(b), height(h) {}
    float area() {
        return 0.5 * base * height;
    }
};

class EquilateralTriangle : public Triangle {
private:
    float side;
public:
    EquilateralTriangle(float s) : side(s) {}
    float area() {
        return (sqrt(3) / 4) * side * side;
    }
};

class IsoscelesTriangle : public Triangle {
private:
    float base, height;
public:
    IsoscelesTriangle(float b, float h) : base(b), height(h) {}
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle* t1 = new RightAngleTriangle(3, 4);
    Triangle* t2 = new EquilateralTriangle(5);
    Triangle* t3 = new IsoscelesTriangle(6, 8);

    cout << "Area of right angle triangle: " << t1->area() << endl;
    cout << "Area of equilateral triangle: " << t2->area() << endl;
    cout << "Area of isosceles triangle: " << t3->area() << endl;


    return 0;
}
