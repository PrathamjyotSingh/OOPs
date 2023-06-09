#include <iostream>
using namespace std;
class add
{
private:
    int a;

public:
    void getvalue()
    {
        cout << "enter value" << endl;
        cin >> a;
    }
    void display()
    {
        cout << "Value: " << a << endl;
    }

    add operator+(add bb)
    {
        add cc;
        cc.a = a + bb.a;
        return cc;
    }
};
int main()
{
    add aa, bb, cc;
    aa.getvalue();
    bb.getvalue();
    cc = aa + bb;
    aa.display();
    bb.display();
    cc.display();
    return 0;
}
