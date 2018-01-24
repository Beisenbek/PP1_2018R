#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <sstream>

using namespace std;

int main(){
	
	freopen("input.txt","r",stdin);


	string s,line,b = "";
	getline(cin,line);

	stringstream ss;
	ss << line;

	while(ss >> s){
		if(b.size() < s.size()){
			b = s;
		}
	}

	cout << b << endl << b.size() << endl;

	return 0;
}