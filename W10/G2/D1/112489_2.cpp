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

bool isPrime(int x){

	if(x == 1) return false;

	bool res = true;

	for(int i = 2; i * i  <= x; ++i){
		if(x % i == 0){
			res = false;
			break;
		}
	}


	return res;
}

int main(){


	int n;
	cin >> n;

	int i = 2;

	while(n != 0){
		if(isPrime(i)){
			n--;
			cout << i << " ";
		}
		i++;
	}
	
	return 0;
}