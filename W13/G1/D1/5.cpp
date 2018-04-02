//Primes
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>

using namespace std;

bool isPrime(int k){
	if(k == 1) return false;

	bool res = true;

	for(int i = 2; i * i <= k; ++i){
		if(k % i == 0){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	int a,b;
	cin >> a >> b;

	for(int i = b; i >= a; --i){
		if(isPrime(i)){
			cout << i << " ";
		}
	}

	return 0;
}