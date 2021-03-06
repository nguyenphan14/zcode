#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}	
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, arr[100000];
		cin >> n >> k;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		bubbleSort(arr, n);
		if(k > n) {
			cout << -1;
		} else {
			cout << arr[k-1];
		}
		cout << endl;
	}
}

