#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int x;
	bool found = false;
	cin >> x;

	for(int i = 1; i *  i < x; ++i){
		int j2 = x - i * i;
		int k = floor(sqrt(j2));
		if(k * k == j2){
			cout << "YES" << endl;
			cout << i << " " << k << endl;
			found = true;
			break;
		}
	}

	if(!found){
		cout << "NO" << endl;
	}

	
	return 0;
}