#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>

using namespace std;

string f(string core, size_t index, string newstr, string oldstr){
	string res = core.substr(0,index);
	res = res + newstr;
	res = res + core.substr(index + oldstr.size());
	return res;
}

int main(){

	string core;
	string oldstr;
	string newstr;

	getline(cin,core);
	getline(cin,oldstr);
	getline(cin,newstr);

	size_t index = core.find(oldstr);

	while(index != string::npos){
		core = f(core,index,newstr,oldstr);
		index = core.find(oldstr);
	}
	
	cout << core << endl;


	return 0;
}