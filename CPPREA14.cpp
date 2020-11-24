#include<bits/stdc++.h>
using namespace std;

void solve() {
	int k, n;
	cin >> k >> n;
	int arr[k*n+1];
	for(int i = 0; i < k*n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+k*n);
        for(int j = 0; j < k*n; ++j) {
            cout << arr[j] << " ";
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

