#include<iostream>
using namespace std;
int search(int nums[], int target,int size) {
        int min =0;
        int max = size-1;
        int mid = (max+min)/2;
        while(min<=max){
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
        mid=(max+min)/2;
        }
        return -1;
    }
    int main(){
        int size=5;
        int v[5]={1,2,3,4,5};
        int target=5;
        cout<<search(v,target,size);
    }