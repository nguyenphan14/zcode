#include<bits/stdc++.h>
using namespace std;

long long m = 1000000007;

unsigned long long tmp[200];

void init() {
	for (int i = 0; i < 1000; i++) {
		tmp[i] = -1;
	}
}

unsigned long long modFib(int n) {
	if (tmp[n] == -1){
		if (n <= 1) {
			tmp[n] = n;
		}
		else {
			tmp[n] = (modFib(n - 1) %m + modFib(n - 2) %m) %m;
		}
	}
	return tmp[n];
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		init();
		cout << modFib(n) << endl;
	}
}

