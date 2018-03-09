#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	string str;
	string str2 = "";
	getline(cin,str);

	if(str[0] != ' ') cout << str[0];

	for(int i = 1; i < str.size(); ++i){
		if(str[i] == ' ' && str[i-1] == ' ') continue;
		str2 = str2 + str[i];
	}

	if(str2[str2.size() - 1] == ' '){
		str2.erase(str2.size() - 1,1);
	}

	cout << str2 << endl;
	
	return 0;
}