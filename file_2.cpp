#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("text1.txt");
    out<<"pratham\n";
    out<<"pratham\n";
    out<<"pratham\n";
    out<<"pratham\n";
    out.close();

    ifstream in;
    string a;
    in.open("text.txt");
    // getline(in,a);
    // getline(in,b);
    // cout<<a<<endl;
    // cout<<b;
    while(in.eof()==0){
        getline(in,a);
        cout<<a<<endl;
    }
    in.close();
}