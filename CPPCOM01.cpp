#include<bits/stdc++.h>
#define max 100000

using namespace std;

void printArr(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << " ";
}

void generateBinaryString(int n, int arr[], int i) { 
    if (i == n) { 
        printArr(arr, n); 
        return; 
    } 
    arr[i] = 0; 
    generateBinaryString(n, arr, i + 1); 
  	arr[i] = 1; 
    generateBinaryString(n, arr, i + 1); 
} 

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[max];
		generateBinaryString(n , arr, 0);
		cout << endl;
	}
}
 

