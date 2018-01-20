#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){

	
	freopen("input.txt","r",stdin);

	string t;
	string b = "";

	while(cin >> t){
		if(t.size() > b.size()){
			b = t;
		}
	}

	cout << b << endl  << b.size() << endl;

	return 0;
}