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
	cin >> str;

	sort(str.begin(),str.end());

	for(int i = 0; i < str.size(); ++i){
		int k = 1;
		int j = i + 1;
		while(j < str.size() && str[i] == str[j]){
			j++;
			k++;
		}

		if(k == 1){
			cout << str[i];
		}else{
			i = j - 1;
		}
	}
	
	return 0;
}