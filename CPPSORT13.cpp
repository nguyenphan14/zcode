#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int a[n+1], b[m+1];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}

	int merge[m+n+1], index = 0;
	for(int i = 0; i < n+m; i++) {
		if(i < n) {
			merge[i] = a[i];
		} else {
			merge[i] = b[index++];
		}
	}
	sort(merge, merge+m+n);
	for(int i = 0; i < m+n; i++) {
		cout << merge[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

