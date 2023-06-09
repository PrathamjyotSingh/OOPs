#include<iostream>
using namespace std;
class student{
    public:
    virtual void display()=0;
};
class medical:public student{
    public:
    void display(){
        cout<<"this is medical"<<endl;
    }
};
class science:public student{
    public:
    void display(){
        cout<<"this is science"<<endl;
    }
};
class commerce:public student{
    public:
    void display(){
        cout<<"this is commerce"<<endl;
    }
};
int main(){
    student *s[3];
    medical m1;
    science s1;
    commerce c1;
    s[0]=&m1;
    s[1]=&s1;
    s[2]=&c1;
    s[0]->display();
    s[1]->display();
    s[2]->display();
}