#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){


	int a,b,c;
	cin >> a >> b >> c;

	bool c1 = a + b > c;
	bool c2 = b + c > a;
	bool c3 = a + c > b;

	if(c1 && c2 && c3){
		cout << "OK!";
		
	}else{
		cout << "NO!";
	}	

	return 0;
}
	