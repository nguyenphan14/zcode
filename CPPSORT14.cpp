#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int count = 0;
	for(int i = 0; i < n-1; i++) {
		if(a[i+1] - a[i] > 1) {
			count += a[i+1] - a[i] -1;
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

