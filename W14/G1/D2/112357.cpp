#include <iostream>

using namespace std;

string s;
int k;
int ans = 0;

void f(string temp){

	if(temp.size() == k){
		cout << temp << endl;
		ans++;
		return;
	}

	for(int i = 0; i < s.size(); ++i){
		f(temp + s[i]);
	}
}

int main(){

	cin >> s;
	cin >> k;

	f("");

	cout << ans;
   

    return 0;
}