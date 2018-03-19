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

	s.insert(11);
	s.insert(7);
	s.insert(9);
	s.insert(10);
	s.insert(5);
	s.insert(6);

	
	cout << *s.begin();
	
	return 0;
}