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

	int n;
	cin >> n;

	int i = 2;

	while(n != 0){

		int k = 0;

		for(int j = 1; j <= i; ++j){
			if(i % j == 0) k++;
		}

		if(k == 2){
			n--;
			cout << i << " ";
		}

		i++;
	}
	
	return 0;
}