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
	int k = 0;

	for(int i = 1; i <= x; ++i){
		if(x % i == 0) k++;
	}

	if(k == 2) return true;

	return false;
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