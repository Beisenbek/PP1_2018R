#include <iostream>
#include <vector>

using namespace std;

bool check1(string t){
	if(t.size() > 3 || t.size() <= 0) return false;
	return true;
}

bool check2(string t){

	if(t.size() != 3) return false;
	
	int d = 100*(t[0]-48) + 10 * (t[1] -48) + (t[2]-48);
	if(d > 255) return false;

	return true;
}

vector<string> split(string s, char c){
	vector<string> res;
	string t = "";

	for(int i =0; i < s.size(); ++i){
		if(s[i] != c){
			t = t + s[i];
		}else{
			res.push_back(t);
			t = "";
		}
	}

	if(t.size() > 0){
		res.push_back(t);
	}

	return res;
}



int main(){

	string s;
	cin >> s;

	vector<string> v = split(s,'.');

	bool ok = true;

	for(int i =0 ; i < v.size(); ++i){
		if(!check1(v[i]) || ! check2(v[i])){
			ok = false;
			break;
		}
	}

	if(!ok){
		cout << 0;
	}else{
		cout << 1;
	}
	return 0;
}