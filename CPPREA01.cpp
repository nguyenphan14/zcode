#include<bits/stdc++.h>
using namespace std;

long long arr[1000001];

int main() {

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n;) {
        if (arr[i] >= 0 && arr[i] != i) 
        	arr[arr[i]] = (arr[arr[i]] + arr[i]) - (arr[i] = arr[arr[i]]);
        else
            i++;
    	}
		for(int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}
}

