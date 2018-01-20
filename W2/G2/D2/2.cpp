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


	cout << a * 8 + b * 4 + c * 2 + d;
	
	return 0;
}