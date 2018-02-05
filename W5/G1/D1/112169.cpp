#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
    
    double x,y;
    cin >> x >> y;
    
    bool st1 = (x <= 0 && x >= y);
    bool st2 = (y >= x);
    bool st3 = (x * x + y * y <= 1);
    
    //cout << st2 << " " << st3 << endl;
    
    if(st3 && (st2 || st1)) cout << "YES";
    else cout << "NO";
    
    return 0;
}
