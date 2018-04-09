#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <string>
#include <vector>
#include <cctype>
#include <set>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    
    string str, sub, newsub;
    getline(cin,str);
    getline(cin,sub);
    getline(cin,newsub);

   	int pos = str.find(sub);

	while(pos != string::npos){
    	str.replace(pos,sub.size(),newsub);
    	pos = str.find(sub,pos+1);
	}

	cout << str << endl;

    
    return 0;
}
