#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	for(int x = 0; x <= 1000; ++x){
		if(a * x * x * x + b * x * x + c * x + d == 0){
			cout << x << " ";
		}
	}
	
	return 0;
}