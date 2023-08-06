#include<iostream>
using namespace std;
int main(){
	int arr[10] = {6, 5, 7, 24, -5, 16, 0, 22, 1, 5};
	int rra[10];
	for(int i=0;i<10;i++){
	rra[i]=arr[9-i];
	}
	for(int i=0;i<10;i++){
	cout<<rra[i]<<endl;
	}
}

