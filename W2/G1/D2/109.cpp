#include <iostream>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	bool found = false;

	for(int i = 0; i < s.size() - 1; ++i){
		for(int j = i + 1; j < s.size(); ++j){
			if(s[i] == s[j]){
				cout << s[i];
				found = true;
				break;
			}
		}
		if(found){
			break;
		}
	}
	
	return 0;
}