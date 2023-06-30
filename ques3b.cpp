#include<iostream>
#include<cmath>
using namespace std;
class shape{
	public:
		virtual float area(int x)=0;
		virtual float area(int x, int y)=0;
		virtual float area(int x, int y,int z)=0;
};
class rat : public shape{
public:
float area(float b,float h)
{
cout<<"area of right angle triangle:"<<endl;
    cout<< 0.5*b*h;
}
};
class et : public shape{
public:
float area(float s)
{
	cout<<"area of equilateral triangle:"<<endl;
    cout<< ((sqrt(3)/4)*s*s);
}
};
class it{
public:
float area(float a,float b,float c) 
{
    float s=(a+b+c)/2;
    cout<<"area of isosceles triangle:"<< (sqrt(s*(s-a)*(s-b)*(s-c)));
}
};
int main()
{
   shape *s;
   rat r;
   et e;
   it i;
   s=&r;
   s->area(3,4);
   s=&e;
   s->area(2);
   s=&i;
   s->area(3,4,5);
    return 0;
}
