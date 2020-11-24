#include<bits/stdc++.h>
using namespace std;

long long sequenceSum(int arr[], int l, int r){
	int res = 0;
	for(int i = l-1; i < r; i++) {
		res += arr[i];
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, q, arr[100001];
		cin >> n >> q;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int query[q][2];
		for(int i = 0; i < q; i++) {
			cin >> query[i][0] >> query[i][1];
		}
		for(int i = 0; i < q; i++) {
			cout << sequenceSum(arr, query[i][0], query[i][1]) << endl;
		}
	}	
}

