#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n+1], pos = -1, first = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] == x && first == 0) {
			pos = 1;
			first++;
		}
	}
	cout << pos << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

