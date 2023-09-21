// C++ program to implement linear
// search in unsorted array
#include <bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n, int key){
	for(int i=0; i<n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}
void deleteElement(int arr[], int n, int key){

	int pos = findElement(arr,n,key);
	cout << "pos----" << pos << '\n';
	for(int i = pos; i < n -1; i++){
		arr[i] = arr[i+1];
	}
}

int main(){
	int arr [10] = {5,6,8,3,4,0,8,7,5};
	cout << "arr [] = " << arr <<'\n';;
  int i, n = 9;
  cout << "n " << n <<'\n';
	int key = 0;
	cout << "key " << key <<'\n';

  // Before instering element into the array data
	cout << "Before deletion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

    // Inserting key
  deleteElement(arr, n, key);

	cout << "After deletion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

}