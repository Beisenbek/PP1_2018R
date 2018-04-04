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

	int x;
	int cnt = 0;

	while(cin >> x){
		if(x == 0) cnt++;
		else cout << x << " ";
	}

	for(int i = 0; i < cnt; ++i){
		cout << 0 << " ";
	}
	
	return 0;
}