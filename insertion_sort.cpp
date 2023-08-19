#include<iostream>
using namespace std;
int sort(int nums[], int size) {
        
        for(int i=1;i<size;i++)
        {
            int temp=nums[i];
            int j=i-1;
            for (;j>=0;j--)
            {
                if(nums[j]>temp){
                    nums[j+1]=nums[j];
                }
                else{
                    break;
                }
            }
            nums[j+1]=temp;
        }
        for(int i=0;i<size;i++)
        {
            cout<<nums[i];
        }
        
    }
    int main(){
        int size=5;
        int v[5]={9,2,3,7,5};
        sort(v,size);
    }