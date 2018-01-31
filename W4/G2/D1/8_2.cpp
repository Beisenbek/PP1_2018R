#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	int x,i;
	cin >> x >> i;

	cout << (x | (1 << i));

	return 0;
}