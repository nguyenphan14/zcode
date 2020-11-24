#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned long long n, k, res, mod;
		cin >> n >> k;
		if(n < k) {
			res = (n*(n+1))/2;
		} else {
			res = (k*(k-1))/2;
			unsigned long long mod = n%k;
			res = res*(n/k) + (mod *(mod + 1))/2;
		}
		if(res == k) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}

