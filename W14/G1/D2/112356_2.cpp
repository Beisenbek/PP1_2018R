#include <iostream>
#include <map>
#include <string>

using namespace std;

string s;
map<char,int> m;

int f(int index, int temp){
	if(index < 0) return temp;
	
	int k = m[s[index]];
	int l = m[s[index + 1]];

	if(k >= l) temp = temp + k;
	else temp = temp - k;

	return f(index - 1,temp);
}

bool f2(){

	bool ok = true;

	for(int i = 0; i < s.size(); ++i){
		if(m[s[i]] == 0){
			ok = false;
			break;
		}
	}

	return ok;
}

int main(){

	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;


	while(cin >> s){

		size_t n = s.size();

		if(f2()){
			cout << f(n - 2,m[s[n-1]]);	
		}
		else{
			cout << s;
		}
		cout << " ";
	}

	

    return 0;
}
