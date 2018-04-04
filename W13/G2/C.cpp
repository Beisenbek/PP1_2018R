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

int main(){

	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i = i + 2){
		cout << s[i];
	}
	
	return 0;
}