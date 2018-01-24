#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	string s;
	getline(cin,s);

	string t = s;

	reverse(t.begin(),t.end());

	bool isPal = true;

	for(int i = 0; i < s.size(); i = i + 1){
		if(t[i] != s[i]){
			isPal = false;
			break;
		}
	}

	if(isPal == true){
		cout << "yes";
	}else{
		cout << "no";
	}
	
	return 0;
}