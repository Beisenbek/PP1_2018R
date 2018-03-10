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

	freopen("input.txt","r",stdin);

	string s;
	cin >> s;
	int ans = 0;

	for(size_t i = 0; i < s.size(); ++i){
		if(s[i] == 'a'){
		 	s[i] = 'b';
		 	ans++;
		}
		else if(s[i] == 'b'){
			s[i] = 'a';
			ans++;
		} 
		else if(s[i] == 'A'){
			s[i] = 'B';	
			ans++;
		} 
		else if(s[i] == 'B'){
			s[i] = 'A';
			ans++;	
		} 
	}

	cout << s << endl;
	cout << ans << endl;

	
	return 0;
}