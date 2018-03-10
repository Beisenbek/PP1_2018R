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
		if(s[i] == 'a' || s[i] == 'A'){
			int k = int(s[i]);
			k = k + 1;
			s[i] = char(k);
		 	ans++;
		}
		else if(s[i] == 'b' || s[i] == 'B'){
			int k = int(s[i]);
			k = k - 1;
			s[i] = char(k);
		 	ans++;
		}
	}

	cout << s << endl;
	cout << ans << endl;

	
	return 0;
}