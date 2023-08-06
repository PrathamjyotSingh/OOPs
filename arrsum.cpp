#include<iostream>
using namespace std;
printarr(int arr[],int size){
	for(int i=0;i<size;i++){
	cout<<arr[i];
	}
}
inputarr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<"enter values";
		cin>>arr[i];
	}
}
int main(){
	int n;
	cout<<"enter size";
	cin>>n;
	int arr[n];
	inputarr(arr,n);
	printarr(arr,n);
	
}

