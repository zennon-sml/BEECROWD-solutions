#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i, j, j1, x;
    cin >> n;
    getchar();
    string lingua;
    string linguas[100] = {};    
    for (i = 0; i < n; i++) {
        cin >> x;
        getchar();
        for (j = 0; j < x; j++) {
            getline(cin, lingua);
            linguas[j] = lingua;
        }
        bool diff = true;
        for (j1 = 0; j1 < j-1; j1++) {
            if (linguas[j1] != linguas[j1+1]) {
                diff = false;
            }
        }
        if (!diff) {
            cout << "ingles" << '\n';
        }else{
            cout << linguas[0] << '\n';
        }
    }
    
}