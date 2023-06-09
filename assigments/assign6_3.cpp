#include<iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
class triangle {
   protected:
    float x,y;

   public:
    
    virtual float calculateArea(int x, int y) = 0;
    virtual void display() = 0;
};
class equilateral:public triangle{
   public:
   	
    float calculateArea(float x , float y) {
        float ans =  0.25*sqrt(3)*x*x  ;
    }
    void display() {
        cout << "equilateral's area is " << ans << endl;
    }
};

class isoceles:public triangle{
   public:
   	
    float calculateArea(float x , float y) {
        float ans =  0.5*x*y  ;
    }
    void display() {
        cout << "isoceles's area is " << ans << endl;
    }
};

class rightangle:public triangle{
   public:
   	
    float calculateArea(float x , float y) {
        float ans = (x * y) / 2 ;
    }
    void display(){
        cout << "rightangle's area is " << ans << endl;
    }
};

int main() {
    equilateral e1;
    isoceles i1;
    rightangle r1;

    cout << "Enter side of equilateral : ";
    e1.calculateArea(3,4);
    e1.display();

    cout << "Enter base and heigth of isosceles : ";
    i1.calculateArea(3,4);
    i1.display();

    cout << "Enter base and heigth of rightangle : ";
    r1.calculateArea(3,4);
    r1.display();

  
    return 0;
}