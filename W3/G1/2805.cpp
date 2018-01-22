//only for digits!!!!
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string s;
	getline(cin,s);

	for(size_t i = 0; i < s.size(); ++i){
		if(s[i]=='0') cout << '0';
		else if(s[i]=='1') cout << "1";
		else if(s[i]=='2') cout << "10";
		else if(s[i]=='3') cout << "11";
		else if(s[i]=='4') cout << "100";
		else if(s[i]=='5') cout << "101";
		else if(s[i]=='6') cout << "110";
		else if(s[i]=='7') cout << "111";
		else if(s[i]=='8') cout << "1000";
		else if(s[i]=='9') cout << "1001";
		else cout << s[i];
	}

	
	return 0;
}