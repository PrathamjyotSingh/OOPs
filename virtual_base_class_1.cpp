#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()=0; //pure virtual function
    };
class B:virtual public A{
    public:
    void display(){
        cout<<"base class B"<<endl;
    }
};
class C:virtual public A{
    public:
    void display(){
        cout<<"base class C"<<endl;
    }
};
class D: public B,public C
{
public:
void display(){
        cout<<"base class D"<<endl;
    }
};

int main(){
    A *ptr;
    B b;
    C c;
    D d;
    ptr=&b;
    ptr->display();
    ptr=&c;
    ptr->display();
    ptr=&d;
    ptr->display();
}