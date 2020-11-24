#include <bits/stdc++.h> 
using namespace std; 

void primeFactors(long long n) {   
    for (long long i = 2; i <= sqrt(n); i++) {  
    	int count = 0;
        while (n % i == 0)  {  
        	++count;
            n = n/i;  
        }  
        if(count != 0) {
        	cout << i << " " << count << " ";
		}
    }  

    if (n > 2)  
        cout << n << " " << 1;  
}  
  
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		primeFactors(n);
		cout << endl;
	}
}
