#include<bits/stdc++.h>
using namespace std;

void splitString(string str) {
	string arrStr[100];
	int index = 0;
	stringstream ss(str);
	
	do {
		string word;
		ss >> word; 
		
		arrStr[index] = word;
		++index;
 	} while(ss);
	for(int i = 0; i < index; i++) {
		transform(arrStr[i].begin(), arrStr[i].end(), arrStr[i].begin(), ::tolower);
	}
	string mid = "";
	for(int i = 0; i < index - 2; i++) {
		mid += arrStr[i][0];
	}
	cout << arrStr[index-2] + mid + "@ptit.edu.vn";
}

int main() {
	string name; 
	getline(cin, name);
	splitString(name);
}

