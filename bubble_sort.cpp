#include<iostream>
using namespace std;
int sort(int nums[], int size) {
        for(int i=1;i<size;i++)
        {
            for (int j=0;j<size-i;j++)
            {
                if (nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
            
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
