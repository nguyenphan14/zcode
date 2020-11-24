#include<bits/stdc++.h>
using namespace std;

void solve() {
	string a, b;
	cin >> a >> b;
	while(a.size() < b.size()) {
		a = '0' + a;
	}
	while(a.size() > b.size()) {
		b = '0' + b;
	}
	if(a < b) {
		swap(a, b);
	}
	int remainder = 0;
	string ans = "";
	for(int i = a.size() - 1; i >= 0; --i){
		int res = int(a[i] - '0') - int(b[i] - '0') - remainder;
		if(res > 0) {
			ans = char(res + '0') + ans;
			remainder = 0;
		} else if (res == 0) {
			ans = '0' + ans;
			remainder = 0;
		} else {
			ans = char(res + 10 + '0') + ans;
			remainder = 1;
		}
	}
	cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
