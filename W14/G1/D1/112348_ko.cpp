//Orazbek Khibadullin
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
	
	string str1,str2,str3;
	
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);

	size_t n = str1.size();
	size_t m = str2.size();
	size_t k = str3.size();

	for (size_t i = 0; i < n; ++i){
		if(str2 == str1.substr(i,m)){
			i = i + m - 1;
			cout << str3;
		}
		else{
		    cout<<str1[i];
		}
	}

	return 0;
}