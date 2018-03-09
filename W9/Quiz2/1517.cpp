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
		for(int j = 1; j * j < x; ++j){
			if( i * i + j * j == x){
				cout << "YES" << endl;
				cout << i << " " << j << endl;
				found = true;
				break;
			}
		}	
		if(found) break;	
	}

	if(!found){
		cout << "NO" << endl;
	}

	
	return 0;
}