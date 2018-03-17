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

	for(int i = 0; i < hex.size(); ++i){
		int k = 0;
		int d = hex.size() - 1 - i;
		if(hex[i]>='0' && hex[i] <= '9'){
			k = int(hex[i]) - 48;
		}else{
			k = int(hex[i]) - 55;
		}

		sum = sum + k*pow(16,d);
	}

	cout << sum << endl;
	
	return 0;
}