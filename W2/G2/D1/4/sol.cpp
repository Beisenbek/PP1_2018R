#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	double d = 2.4;

	cout << floor(d) << endl;
	cout << ceil(d) << endl;
	cout << round(d) << endl;
	cout << int(d) << endl;

	cout << "######" << endl;
	int x = 2;

	cout << double(x) << endl;
	printf("%.2f\n",double(x));
	printf("%.2f\n",x * 1.0);

	cout << "######" << endl;

	int a = 4;
	int b = 3;

	cout << 1.0*a / b << endl;

	return 0;
}