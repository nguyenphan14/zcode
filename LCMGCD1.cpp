#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	if(b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

long long lcm(long a, long b) {
	return (a*b)/(gcd(a, b));
}

int main() {
	int t = 0, a, b; 
	cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << lcm(a, b) <<" "<< gcd(a, b) << endl;
	}
}
