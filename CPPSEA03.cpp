#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n-1; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n-2; i++) {
		if(arr[i+1] - arr[i] != 1) {
			cout << arr[i]+1 << endl;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

