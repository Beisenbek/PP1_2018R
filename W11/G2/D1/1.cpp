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

	s.insert(1);
	s.insert(10);
	s.insert(1);
	s.insert(12);
	s.insert(11);
	s.insert(11);


	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << endl;
	}

	
	return 0;
}