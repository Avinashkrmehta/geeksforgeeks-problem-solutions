// C++ program to implement linear
// search in unsorted array
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n, int key){
	int i;
	 for(i = 0; i < n; i++)
	 	if (arr[i] == key)
	 		return i;

	 return -1;
}

int main(){
	int arr [] = {5,6,8,3,4,0,8,7,5};
	int n = sizeof(arr) / sizeof(arr[0]);

	int key = 4;

	int position = findElement(arr, n, key);
	if (position == -1){
		cout << "Element not found";
	}
	else{
		cout << "Element found at the position: " << position + 1;
	}
	return 0;
}