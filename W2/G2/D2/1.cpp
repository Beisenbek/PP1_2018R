#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int x;
	cin >> x;

	int a = x % 2;
	x = x / 2;

	int b = x % 2;
	x = x / 2;

	int c = x % 2;
	x = x / 2;

	int d = x;


	cout << d << c << b << a << endl;

	cout << d * 8 + c * 4 + b * 2 + a;
	
	return 0;
}