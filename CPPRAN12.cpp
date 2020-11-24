#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
		cin >> n;
		int a[n+1], b[n+1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}
		int max = 1;
		for(int i = 0; i < n - 1; i++) {
			int sumA = a[i];
			int sumB = b[i];
			for(int j = i+1; j < n; j++){
				sumA += a[j];
				sumB += b[j];
				if(sumA == sumB && j - i + 1 > max) {
					max = j - i + 1;
				}
			}
		}
	cout << max << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}

