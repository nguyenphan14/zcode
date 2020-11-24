#include<bits/stdc++.h>
using namespace std;

void numbersWith3Divisors(int n) 
{ 
    bool prime[n+1];
    for(int i = 0; i <= n+1; i++) {
    	prime[i] = true;
	}
    prime[0] = prime[1] = false; 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
           for (int i=p*2; i<=n; i += p) 
              prime[i] = false; 
        } 
    } 
    for (int i=0;  i*i <= n ; i++) 
        if (prime[i]) 
         cout << i*i << " "; 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; 
		cin >> n; 
		numbersWith3Divisors(n);
		cout << endl;
	}
}

