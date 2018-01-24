#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	string s,t;
	cin >> s >> t;

	size_t index = t.find(s);

	if(index == string::npos){
		cout << "no";
	}else{
		cout << "yes";
	}
	
	return 0;
}