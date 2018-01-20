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

	int d = x % 2;
	x = x / 2;

	int e = x % 2;
	x = x / 2;

	int f = x % 2;
	x = x / 2;


	cout << 6 - (a + b + c + d + e + f) << endl;

	return 0;
}