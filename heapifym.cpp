#include<iostream>
using namespace std;
class node {
	public:
	int data;
	int arr[100];
	int size=0;
void init(int data){
	size++;
	int ind=size;
	arr[ind] = data;
	while (ind>1){
		int parent=ind/2;
		if(arr[parent]<arr[ind]){
			swap(arr[parent],arr[ind]);
			ind=parent;
		}
		else{
			return;
		}
	}
}
void print(){
	for(int i=1;i<=size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
};

int main(){
	node root;
	root.init(15);
	root.init(25);
	root.init(5);
	root.init(10);
	root.init(43);
	root.init(8);
	root.init(95);
	root.print();
}

