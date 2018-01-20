#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int x;
	cin >> x;
	int s = 0;
	int k = 0;
	int y = x;

	while(x > 0){
		x = x / 2;
		k++;
	}

	int d = pow(2,k-1);

	while(y > 0){
		s = s + d * (y % 2);
		y = y / 2;
		d = d / 2;
	}

	cout << s << endl;
	
	return 0;
}