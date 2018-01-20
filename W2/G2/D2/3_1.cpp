#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int x;
	cin >> x;
	int s = 0;

	for(int i = 1; i <= 6; ++i){
		s = s + x % 2;
		x = x / 2;
	}

	cout << 6 - s << endl;

	return 0;
}