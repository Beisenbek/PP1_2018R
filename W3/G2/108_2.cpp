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

	if(s == t){
		cout << "yes";
	}else{
		cout << "no";
	}
	
	return 0;
}