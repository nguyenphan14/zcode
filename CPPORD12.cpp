#include<bits/stdc++.h>
using namespace std;

int resolve(int arr[], int n) {
	bool res[n+1] = {false};
	
	for(int i = 0; i < n; i++) {
		if(arr[i] > 0 && arr[i] <= n) {
			res[arr[i]] = true;
		}
	}
	for(int i = 1; i <= n; i++) {
		if(!res[i]) {
			return i;
		}
	}
	return n+1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, arr[100001];
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << resolve(arr, n) << endl;
	}
}

