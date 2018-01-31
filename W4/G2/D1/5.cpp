#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	int x;
	cin >> x;

	do{
		cout << x % 10 << endl;
		x = x / 10;
	}while(x > 0);

	
	return 0;
}