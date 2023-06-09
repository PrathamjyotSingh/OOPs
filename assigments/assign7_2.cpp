#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
class String{
    private:
    string a;
    public:
    String(string a){
        this->a=a;
    }
    bool operator==(String b)
    {
        if(a==b.a)
        return true;
        else
        return false;

    }
    string operator+(String b)
    {
        String temp(a+b.a);
        return temp.a;
    }

};
int main(){
    String T1("pratham"),T2("pratham");
    if (T1==T2)
    {
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    cout<<T1+T2;
    return 0;
}