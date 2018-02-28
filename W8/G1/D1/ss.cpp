#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <sstream>

using namespace std;

int main(){

	stringstream ss;

	ss << "hello";
	ss << " ";
	ss << 12;

	string s;

	while(ss >> s){
		cout << s << endl;
	}

	return 0;
}