#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	string del;
	getline(cin, del);
	cout << str.replace(str.find(del), del.length()+1, "");
}

