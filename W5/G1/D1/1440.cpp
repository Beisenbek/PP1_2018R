#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
    
    int n,x,gold = -1,silver = -1;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x > gold){
            silver = gold;
            gold = x;
        }else if(x < gold && x > silver){
            silver = x;
        }
    }
    
    cout << silver << endl;
    
    return 0;
}
