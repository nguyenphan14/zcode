#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n+1];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	int min = abs(arr[0]-arr[1]);
	for(int i = 1; i < n-1; i++) {
		if(abs(arr[i]-arr[i+1]) < min) {
			min = abs(arr[i]-arr[i+1]);
		}
	}
	cout << min << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

