#include<iostream>
using namespace std;
int sort(int nums[], int size) {
        
        for(int i=0;i<size;i++)
        {
            int min=i;
            for (int j=i+1;j<size;j++)
            {
                if(nums[min]>nums[j]){
                    min=j;
                }
            }
            swap(nums[i],nums[min]);
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
