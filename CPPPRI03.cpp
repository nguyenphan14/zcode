#include<bits/stdc++.h>
using namespace std;
 
void primeSieve(long long n) {
	bool check[n+1];
	for(long long i = 2; i <= n; i++) {
		check[i] = true;
	}
	for(long long i = 2; i <= n; i++) {
		if(check[i] == true) {
			for(int j = 2*i; j <=n ; j+=i) {
				check[j] = false;
			}
		}
	}
	for(long long i = 2; i <= n; i++) {
		if(check[i] == true) {
			cout << i << " ";
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		primeSieve(n);
		cout << endl;
	}
}

