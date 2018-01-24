#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	char c;
	cin >> c;

	if(c <= '9' && c >= '0'){
		cout << "yes";
	}else{
		cout << "no";
	}
	
	return 0;
}