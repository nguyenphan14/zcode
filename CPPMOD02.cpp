#include<bits/stdc++.h>
using namespace std;
  
int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, m, res = -1;
		cin >> a >> m;
		for(int i = 0; i < m; i++) {
			if((i*a) % m == 1) {
				res = i;
				break;	
			}
		}
		cout << res << endl;
	}
}

