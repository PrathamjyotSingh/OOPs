#include<iostream>
using namespace std;
int swap(int arr, int rarr){
	int temp=arr;
	arr=rarr;
	rarr=temp;
}
int main(){
	int arr[8]={3,57,13,3,7,15,0,9};
	for(int i=0;i<8;i=i+2){
		if(i+1<8){
			int temp=arr[i];
	        arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	for(int i=0;i<8;i++){
	cout<<arr[i]<<endl;
	}
}

