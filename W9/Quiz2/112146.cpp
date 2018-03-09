#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	double r;
	cin >> r;
	double s = M_PI * r * r;
	double l = 2 * M_PI * r;

	printf("%.6f\n%.6f",s,l);
	
	return 0;
}