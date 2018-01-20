#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	sort(s.begin(),s.end());

	for(int i = 0; i < s.size()- 1; ++i){
		if(s[i] == s[i+1]){
			cout << s[i];
			break;
		}
	}

	
	return 0;
}