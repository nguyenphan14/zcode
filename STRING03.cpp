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
	transform(arrStr[index-2].begin(), arrStr[index-2].end(), arrStr[index-2].begin(), ::toupper);
	for(int i = 0; i < index-2; i++) {
		transform(arrStr[i].begin(), arrStr[i].end(), arrStr[i].begin(), ::tolower);
	}
	for(int i = 0; i < index -3; i++) {
		arrStr[i][0] = char(toupper(arrStr[i][0]));
		cout << arrStr[i] << " ";
	}
	arrStr[index-3][0] = char(toupper(arrStr[index-3][0]));
		cout << arrStr[index-3] << ", " << arrStr[index-2];
	
}

int main() {
	string name; 
	getline(cin, name);
	splitString(name);
}

