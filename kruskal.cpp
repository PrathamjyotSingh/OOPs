#include <bits/stdc++.h> 
using namespace std; 

int arr[5][5];
static int p[5];
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        if (swapped == false)
            break;
    }
}
void addEdge(int x,int y,int z){
	arr[x][y]=z;
	arr[y][x]=z;
	p[t]=z;
	t++
}
void minedge(){
	int a;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (arr[i][j]==p[a]){
				cout<<i<<" "<<j<<endl;
				a++;
			}
		}
		cout<<endl;
	}
}
int main() 
{ 
	addEdge(0, 1, 10); 
	addEdge(1, 3, 15); 
	addEdge(2, 3, 4); 
	addEdge(2, 0, 6); 
	addEdge(0, 3, 5);
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0; 
}

