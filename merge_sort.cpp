#include<iostream>
using namespace std;
void merge(int arr[],int lb,int mid,int ub){
	int n=ub-lb+1;
	int in1=lb;
	int in2=mid+1;
	int merge[n];
	int i=0;
	while(in1<=mid && in2<=ub){
		if(arr[in1]<=arr[in2]){
			merge[i++]=arr[in1++];
		}
		else{
			merge[i++]=arr[in2++];
		}
	}
	while(in1<=mid){
		merge[i++]=arr[in1++];
	}
	while(in2<=ub){
    	merge[i++]=arr[in2++];
	}
	for(int i=0,j=lb;i<n;i++,j++){
		arr[j]=merge[i];
	}
}
void mergesort(int arr[],int lb,int ub){
	if(lb>=ub){
		return;
	}
	int mid = lb+ (ub-lb)/2;
	mergesort(arr,lb,mid);
	mergesort(arr,mid+1,ub);
	merge(arr,lb,mid,ub);
}
int main(){
	int arr[] = { 12, 11, 6, 5, 14 };
	int n = sizeof(arr) / sizeof(arr[0]);
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

