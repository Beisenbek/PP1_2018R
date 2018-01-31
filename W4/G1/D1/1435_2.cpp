#include <iostream>

using namespace std;

bool check1(string t){
	if(t.size() > 3 || t.size() <= 0) return false;
	return true;
}
bool check2(t){

	if(t.size() != 3) return false;
	
	int d = 100*(t[0]-48) + 10 * (t[1] -48) + (t[2]-48);
	if(d > 255) return false;

	return true;
}

int main(){

	string s;
	cin >> s;
	s = s + '.';
	string t = "";
	bool ok = true;

	for(int i =0; i < s.size(); ++i){
		if(s[i] != '.'){
			t = t + s[i];
		}else{
			
			if(!check1(t)|| !check2(t)){
				ok = false;
				break;
			}
			
			t = "";
		}
	}

	if(ok == false){
		cout << 0;
	}else{
		cout << 1;
	}

	return 0;
}