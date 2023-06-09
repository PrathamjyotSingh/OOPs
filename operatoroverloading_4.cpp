#include <iostream>

using namespace std;

class Complex {
private:
  int real;
  int img;

public:
//   Complex(int real = 0, int img = 0)  {
//     this->real = real;
//     this->img = img;
//   };
  Complex(int x ,int y){
    real = x;
    img = y;
  }
  friend Complex operator+( Complex& ,  Complex& );

  void display() {
    cout << real << " + " << img << "i" << endl;
  }
};
Complex operator+( Complex& c1,  Complex& c2) {
    return Complex(c1.real + c2.real, c1.img + c2.img);
  }

int main() {
  Complex c1(1, 2), c2(3, 4);

  Complex c3 = c1 + c2;
  c3.display();

  return 0;
}