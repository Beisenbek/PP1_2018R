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

int main(){

	freopen("input.txt","r",stdin);

	string hex;
	cin >> hex;
	int sum = 0;

	for(int i = hex.size() - 1; i >=0; --i){
		int k = 0;
		int index = hex.size() - 1 - i;
		if(hex[index]>='0' && hex[index] <= '9'){
			k = int(hex[index]) - 48;
		}else{
			k = int(hex[index]) - 55;
		}

		sum = sum + k*pow(16,i);
	}

	cout << sum << endl;
	
	return 0;
}