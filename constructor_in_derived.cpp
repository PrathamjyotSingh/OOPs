#include<iostream>
using namespace std;
class student{
   
    public:
    int num;
    student(int x){
        num=x;
    }
    void display(){

    }
 
};
class score:public student{
    private:
    int sc;
    public:
    score(int a, int b):student(a)
    {
        sc=b;
    }
    void display(){
        cout<<"num = "<<num<<endl;
        cout<<"score = "<<sc<<endl;
    }
};
int main(){
    score s(3,4);
    s.display();
}