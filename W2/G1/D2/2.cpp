#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int a = n % 2;
	n = n / 2;

	int b = n % 2;
	n = n / 2;
	
	int c = n % 2;
	n = n / 2;
	
	int d = n % 2;
	n = n / 2;

	int e = n % 2;
	n = n / 2;

	int f = n % 2;
	n = n / 2;

	cout << 6 - (a  + b + c + d + e + f) << endl;

	return 0;
}