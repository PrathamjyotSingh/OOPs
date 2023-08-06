#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return true;
		}
	}
	return false;
}
int main(){
	int arr[10] = {6, 5, 7, 24, -5, 16, 0, 22, 1, 5};
	cout<<"enter search";
	int key;
	cin>>key;
	bool found = search(arr,10,key);
	
	if(found){
		cout<<"present";
	}
	else{
		cout<<"absent";
	}
}

