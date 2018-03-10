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
		if(tolower(s[i]) == 'a'){
			++s[i];
		 	ans++;
		}
		else if(tolower(s[i]) == 'b'){
			--s[i];
		 	ans++;
		}
	}

	printf("%s\n%i", s.c_str(),ans);

	
	return 0;
}