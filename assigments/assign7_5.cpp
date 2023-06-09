// #include <iostream>
// using namespace std;

// class Test {
//     private:
//         double x;
//     public:
//         Test(float f) {
//             x = f;
//         }

//         void display() {
//             cout << "The value of x is: " << x << endl;
//         }
// };

// int main() {
//     Test t = 3.0;
//     t.display();
//     return 0;
// }
using namespace std;
#include <iostream>

class test
{
    int a, b, c;

public:
    void show()
    {
        cout << a << "," << b << "," << c << endl;
    }

    test(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void operator()(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
};

int main()
{
    test ob(6,7,8);
    ob.show();
    ob(1, 2, 3);
    ob.show();
}