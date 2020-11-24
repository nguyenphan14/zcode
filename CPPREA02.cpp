#include<bits/stdc++.h>
#define max 1000001
using namespace std;

long long arr[max], res[max];

void rearrangeArr(long long arr[], int n) {
	int index = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] != 0) {
			res[index] = arr[i];
			index++;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			res[i] = 0;
		}
		rearrangeArr(arr, n);
		for(int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}
}

