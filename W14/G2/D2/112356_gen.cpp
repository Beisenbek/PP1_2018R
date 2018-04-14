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

string f(int val){

	string res = "";

	int a1 = val / 1000;
	for(int i = 0; i < a1; ++i){
		res = res + "M";
	}

	int a2 = val % 1000;
	if(a2 >= 500) {
		if(a2 < 900){
			res = res + "D";
			a2 = a2 - 500;
			a2 = a2/100;
			for(int i = 0; i < a2; ++i){
				res = res + "C";
			}
		}else{
			res = res + "CM";
		}
	}else{
		if(a2 < 400){
			a2 = a2/100;
			for(int i = 0; i < a2; ++i){
				res = res + "C";
			}
		}else{
			res = res + "CD";
		}
	}
	

	int a3 = val % 100;	
	if(a3 >= 50) {
		if(a3 < 90){
			res = res + "L";
			a3 = a3 - 50;
			a3 = a3 / 10;
			for(int i = 0; i < a3; ++i){
				res = res + "X";
			}
		}else{
			res = res + "XC";
		}
	}else{
		if(a3 < 40){
			a3 = a3 / 10;
			for(int i = 0; i < a3; ++i){
				res = res + "X";
			}
		}else{
			res = res + "XL";
		}
	}

	int a4 = val % 10;
	if(a4 >=5){
		if(a4 < 9){
			res = res + "V";
			a4 = a4 - 5; 
			for(int i = 0; i < a4; ++i){
				res = res + "I";
			}
		}else{
			res = res + "IX";
		}
	}else{
		if(a4 < 4){
			for(int i = 0; i < a4; ++i){
				res = res + "I";
			}
		}else{
			res = res + "IV";
		}
	}
	
	return res;
}

int main(){

	freopen("gen.cpp","w",stdout);



	cout << "#include <iostream>" << endl;
	cout << "#include <stdio.h>" << endl;
	cout << "#include <cmath>" << endl;
	cout << "#include <algorithm>" << endl;
	cout << "#include <ctype.h>" << endl;
	cout << "#include <vector>" << endl;
	cout << "#include <string>" << endl;
	cout << "#include <sstream>" << endl;
	cout << "#include <map>" << endl;
	cout << "#include <set>" << endl;

	cout << "using namespace std;" << endl;

	cout << "int main(){" << endl;

	cout << "map<string,int> m;" << endl;
	
	for(int i = 1; i <= 10000; ++i){
		printf("m[\"%s\"] = %i;\n",f(i).c_str(),i);
	}

	cout << "string s;" << endl;
	cout << "while(cin >> s){if(m[s] == 0) cout << s << ' ';else cout << m[s] << ' ';}" << endl;

	cout << "return 0;} "<< endl;


	return 0;
}

//I - 1
//II - 2
//IX - 9
//XI - 1
//MMXIV - 2014 
