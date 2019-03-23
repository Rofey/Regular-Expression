#include <iostream>

using namespace std;

int main() {

	string s;
	int count = 0, mod, flag1 = 0, flag2 = 0;
	cin >> s;

	if(s.length() == 0) {
		cout << "Valid String";
		return 0;
	} 
	else {
	if(s.length()%3 == 2) {
		flag1 = 1;
	} else 
		flag1 = 0;


	for(int i=0; i<s.length(); i++) {
		if(s[i] == 'a' || s[i] == 'b') {
			flag2 = 1;
		} else {
			flag2 = 0;
			break;
		}
	}
	
	if(flag1 == 1 && flag2 == 1) 
		cout << "valid";
	else 
		cout << "Invalid";
	}


}