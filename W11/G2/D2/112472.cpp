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

	string str;
	getline(cin, str);
	set<char> used,ans;

	for(size_t i = 0; i < str.size(); ++i){
		if(str[i] <= '9' && str[i] >= '0'){
			if(used.find(str[i]) != used.end()){
				ans.insert(str[i]);
			}else{
				used.insert(str[i]);
			}
		}
	}

	if(ans.size() == 0){
		cout << "NO";
	}else{
		for(set<char>::iterator it = ans.begin(); it != ans.end(); ++it){
			cout << *it;
		}
	}
	
		
	return 0;
}