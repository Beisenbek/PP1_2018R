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

	set<int> s;

	int x = -1;

	while(x != 0){
		cin >> x;
		s.insert(x);
	}


	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}
	
	return 0;
}