// C++ program to implement linear
// search in unsorted array
#include <bits/stdc++.h>
using namespace std;

int insertSorted(int arr[], int n, int key, int capacity){
	if (n >= capacity)
        return n;
    arr[n] = key;
 
    return (n + 1);
}

int main(){
	int arr [10] = {5,6,8,3,4,0,8,7,5};
	cout << "arr [] = " << arr <<'\n';;
	int capacity = sizeof(arr) / sizeof(arr[0]);
	cout << "capacity " << capacity <<'\n';
  int n = 9;
  cout << "n " << n <<'\n';
	int i, key = 10;
	cout << "key " << key <<'\n';

  // Before instering element into the array data
	cout << "Before insertion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

    // Inserting key
  n = insertSorted(arr, n, key, capacity);

	cout << "After insertion : ";
  for(i=0; i < n; i++){
  	cout << arr[i]<<" ";
  }
	cout << endl;

}