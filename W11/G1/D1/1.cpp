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
	s.insert(7);
	s.insert(9);
	s.insert(10);
	s.insert(5);
	s.insert(6);

	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}
	
	return 0;
}