#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int v,t;

	int s = (abs(v) * t)%109;

	/*if(s == 0){
		cout << 0;
	}else if(v < 0){
		cout << 109 - s;
	}else{
		cout << s;
	}*/

	cout << (s + 109) % 109
	
	return 0;
}