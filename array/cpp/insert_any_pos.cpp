// C++ program to implement linear
// search in unsorted array
#include <bits/stdc++.h>
using namespace std;

void insertElementPos(int arr[], int n, int key, int pos){
	for(int i = n - 1; i >=  pos; i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = key;
}

int main(){
	int arr [10] = {5,6,8,3,4,0,8,7,5};
	cout << "arr [] = " << arr <<'\n';;
  int i, n = 9;
  cout << "n " << n <<'\n';
	int key = 10, pos = 2;
	cout << "key " << key <<'\n';

  // Before instering element into the array data
	cout << "Before insertion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

    // Inserting key
  insertElementPos(arr, n, key, pos);

	cout << "After insertion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

}