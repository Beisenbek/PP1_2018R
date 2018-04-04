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

bool c1(string x){
	return x.size() <= 10;
}

bool c2(string x){
	int cnt = 0;
	for(int i = 0; i < x.size(); ++i){
		if(x[i] <= '9' && x[i] >= '0') cnt++;
	}
	if(cnt >= 3) return true;
	return false;
}

bool c3(string x){
	string y = x;
	reverse(y.begin(), y.end());
	return x != y;
}

int main(){

	string x;
	cin >> x;

	if(c1(x) && c2(x) && c3(x)){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	return 0;
}