#include<iostream>
using namespace std;

class test{
    int a[10];
    public:
        void setArray(){
            cout<<"Enter the elements of the array\n";
            for(int i=0;i<10;i++){
                cin>>a[i];
            }
        }

        void showArray(){
            cout<<"Your array is\n";
            for(int i=0;i<10;i++){
                cout<<a[i]<<"  ";
            }
            cout<<"\n";
        }

        int operator[](int i){
            if(i<0 || i>9){
                cout<<"Index out of bounds\n";
                return 0;
            }
            else{
                return a[i];
            }
        }
};

int main(){
    test a1;
    a1.setArray();
    a1.showArray();
    cout<<a1[5]<<endl;
    cout<<a1[15]<<endl;
    return 0;
}
