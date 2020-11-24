#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {5, 2, 1, 7 ,-4};
	sort(arr, arr+5);
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;	
}
