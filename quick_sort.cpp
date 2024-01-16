#include<iostream>
using namespace std;
int partition(int arr[],int lb,int ub){
	int pivot=arr[lb];
	int start=lb;
	int end=ub;
	while(end>start){
		while(arr[start]<pivot){
			start++;
		}
		while(arr[end]>pivot){
			end--;
		}
		if (end>start)
		{
			swap(arr[start],arr[end]);
		}
	}
	swap(pivot,arr[end]);
	return end;
}
int quicksort(int arr[],int lb,int ub){
	if(lb<ub){
		int ind = partition(arr,lb,ub);
		quicksort(arr,lb,ind-1);
		quicksort(arr,ind+1,ub);
	}
}
int main(){
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

