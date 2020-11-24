#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int temp = n;
	int sum = 0;
	while(true) {
		while(temp > 0) {
			sum = sum + temp % 10;
			temp /= 10;
		}
		if((sum / 10) > 0) {
			temp = sum;
			sum = 0;
		} else {
			cout << sum << endl;
			return;
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

