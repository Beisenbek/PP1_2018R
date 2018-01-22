#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a,b,c;
	cin >> a >> b >> c;
	int d = b * b - 4 * a * c;

	if(d > 0){
		cout << (-b + sqrt(d))/(2*a) << " " <<(-b - sqrt(d))/(2*a);
	}else if(d == 0){
		cout << -b/(2.0*a);
	}

	return 0;
}