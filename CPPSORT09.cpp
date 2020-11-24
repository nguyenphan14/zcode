#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int arr[n+1];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(arr[i] + arr[j] == k) {
				count++;
			}
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

