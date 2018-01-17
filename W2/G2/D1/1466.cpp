#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	long long N;
	cin >> N;

	long long M = abs(N);

	if(N > 0){
		int x = 1;
		cout << 1 / (1-x);
	}

	if(N > 0){
		if(M % 2 == 0) cout << (M/2)*(M+1);
		if(M % 2 != 0) cout << M*((M+1)/2);
	}else{
		if(M % 2 == 0) cout << 1-(M/2)*(M+1);
		if(M % 2 != 0) cout << 1-M*((M+1)/2);
	}
	
	return 0;
}