#include <iostream>

using namespace std;

string s;

int convert(char c){
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	if(c == 'M') return 1000;
}

bool isRC(char c){
	if(c == 'I') return true;
	if(c == 'V') return true;
	if(c == 'X') return true;
	if(c == 'L') return true;
	if(c == 'C') return true;
	if(c == 'D') return true;
	if(c == 'M') return true;
	return false;
}

int f(int index, int temp){
	if(index < 0) return temp;
	
	int k = convert(s[index]);
	int l = convert(s[index + 1]);

	if(k >= l) temp = temp + k;
	else temp = temp - k;

	return f(index - 1,temp);
}

bool f2(){

	bool ok = true;

	for(int i = 0; i < s.size(); ++i){
		if(isRC(s[i]) == false){
			ok = false;
			break;
		}
	}

	return ok;
}

int main(){

	while(cin >> s){
		if(f2()){
			cout << f(s.size() - 2,convert(s[s.size()-1]));	
		}
		else{
			cout << s;
		}
		cout << " ";
	}

	

    return 0;
}
