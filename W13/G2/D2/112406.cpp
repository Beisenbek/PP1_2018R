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
	bool inFirstPart = true;
	int cnt = 0;

	for(int i = 0; i < s.size(); ++i){
		if(s[i] == 'B'){
			if(inFirstPart){
				cout << s[i];
			}else{
				cnt++;
			}
		}else{
			inFirstPart = false;
			cout << s[i];
		}
	}
	cout << endl << cnt;

	
	return 0;
}