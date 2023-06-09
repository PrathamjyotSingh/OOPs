// #include <iostream>
// using namespace std;

// class Point {
//     private:
//         int x, y;
//     public:
//         Point(int a, int b) {
//             x = a;
//             y = b;
//         }

//         void operator>>(istream &is);

//         void operator<<(ostream &os);
// };

// void Point::operator>>(istream &is) {
//     cout << "Enter the x coordinate: ";
//     is >> x;
//     cout << "Enter the y coordinate: ";
//     is >> y;
// }

// void Point::operator<<(ostream &os) {
//     os << "The point is: (" << x << ", " << y << ")" << endl;
// }

// int main() {
//     Point p(0, 0);
//     p >> cin;
//     p << cout;
//     return 0;
// }









//Write a program in C++ to overload input operator (>>) and output operator (<<)
#include<iostream>
using namespace std;
class overload{
    
    int a;
    public:
    void operator>>(int x)
    {
        a=x;
    }
    void operator<<(overload &ob)
    {
        a=ob.a;
    }
    void show(){
        cout<<a<<endl;
    }
};
int main(){
    overload ob1,ob2;
    ob1>>10;
    ob1.show();
    ob2>>9;
    ob1<<ob2;
    ob1.show();

}