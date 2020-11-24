#include <bits/stdc++.h> 
using namespace std; 
#define max 100000

//void primeFactors(long long n) {  
//    while (n % 2 == 0) {  
//        cout << 2 << " ";  
//        n = n/2;  
//    }  
//    for (long long i = 3; i <= sqrt(n); i = i + 2) {  
//        while (n % i == 0)  {  
//            cout << i << " ";  
//            n = n/i;  
//        }  
//    }  
//
//    if (n > 2)  
//        cout << n << " ";  
//}  
  
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k, arr[max], index = 0;
		cin >> n >> k;
		while (n % 2 == 0) {  
			arr[index] = 2;
			++index;
        	n = n/2;  
    	}  
	    for (long long i = 3; i <= sqrt(n); i = i + 2) {  
	        while (n % i == 0)  {  
	            arr[index] = i;
	            ++index;
	            n = n/i;  
	        }  
	    }  
	    if (n > 2) {
	    	arr[index] = n;
	    	++index;
		} 
		if(k > index) {
			cout << -1 << endl;
		} else {
			cout << arr[k-1] << endl;
		}
	}
}
