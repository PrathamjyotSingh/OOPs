#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    //cout<<"Hello world!";
    int range = 2;
    int num = rand() % range ;
    if(num==0){
        cout<<"Heads"<<endl;
    }
    if(num==1){
        cout<<"Tails"<<endl;
    }
}