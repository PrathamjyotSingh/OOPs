#include <iostream>
using namespace std;
class polygon
{
public:
float height, width;
    void set_value(float x, float y)
    {
        height = x;
        width = y;
    }
};
class rectangle : public polygon
{
public:
    float calculate_area()
    {
        cout << "the area of rectangle is " << height * width<<endl;
    }
};
class triangle : public polygon
{
public:
    float calculate_area()
    {
        cout << "the area of triangle is " << 0.5 * height * width<<endl;
    }
};
int main()
{
    polygon *p1, *p2;
    rectangle r;
    triangle t;
    p1 = &r;
    p2 = &t;
    p1->set_value(3, 4);
    p2->set_value(3, 4);
    r.calculate_area();
    t.calculate_area();
}