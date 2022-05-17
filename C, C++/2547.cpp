#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n, n1, amin, amax, permited = 0;
    while(cin >> n >> amin >> amax){
        while(n--){
            cin >> n1;
            if (n1 >= amin and n1 <= amax) {
                permited ++;
            }
    }
        cout << permited << endl;
        permited = 0;
    }
    

    return 0;
}