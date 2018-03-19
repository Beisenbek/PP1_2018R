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

void doit(set<int> &s,int x){
	s.insert(x);
}

int main(){

	set<int> z;

	for(int i = 1; i <= 10; ++i){
		doit(z,i);
	}

	for(set<int>::iterator it = z.begin(); it != z.end(); ++it){
		cout << *it << " ";
	}


	
	return 0;
}
