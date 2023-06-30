#include<iostream>
#include<cmath>
using namespace std;

float area(float b,float h)
{
    return (0.5*b*h);
}

float area(float s)
{
    return ((sqrt(3)/4)*s*s);
}

float area(float a,float b,float c) 
{
    float s=(a+b+c)/2;
    return (sqrt(s*(s-a)*(s-b)*(s-c)));
}

int main()
{
    float b,h,s,a,b1,c1;
    cout<<"Enter base and height of right angle triangle:"<<endl;
    cin>>b>>h;
    cout<<"Area of right angle triangle is "<<area(b,h)<<" sq units"<<endl;

    cout<<"Enter side of equilateral triangle:"<<endl;
    cin>>s;
    cout<<"Area of equilateral triangle is "<<area(s)<<" sq units"<<endl;

    cout<<"Enter sides of isosceles triangle:"<<endl;
    cin>>a>>b1>>c1;
    cout<<"Area of isosceles triangle is "<<area(a,b1,c1)<<" sq units"<<endl;

    return 0;
}
