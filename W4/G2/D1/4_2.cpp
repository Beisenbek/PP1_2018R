#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	
	int x;
	cin >> x;

	for(;x > 0; x/=10){
		cout << x % 10 << endl;
	}

	
	return 0;
}