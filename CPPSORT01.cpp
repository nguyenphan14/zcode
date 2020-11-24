#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n+1], res[n+1];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}
		}	
	}
	int index = 0;
	for(int i = 0; i < n; i++) {
		if(i%2 != 0) {
			res[i] = arr[index];
			index++;
		} else {
			res[i] = arr[n-1-index];
		}
	}
	for(int i = 0; i < n; i++) {
		cout << res[i] << " ";
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

