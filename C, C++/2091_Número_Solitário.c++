#include <iostream>

using namespace std;

int main(){
    int n, i, j, x;
    
    while(cin >> n && n){
        int z[n];
        for(i=0;i<n;i++){
            cin >> z[i];
        }
        for(j = 0;j < sizeof(z)/sizeof(z[0]);i++){
            cout << z << endl;
        }
    }    
}