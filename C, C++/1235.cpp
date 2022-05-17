#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n, i, j, half, all, odd;
    string a, b, c;
    cin >> n;
    getchar();
    while(n--){
        getline(cin, a);
        half = a.length()/2;
        all = a.length();
        b = "", c = "";
        for (j = half-1,i = 1;j > -1;j--,i++) {
            b += a[j];
            c += a[all-i];
        }
        if(a.length() % 2 == 1){
            c += a[all-i];
        }
        
        cout << b << c << endl;
    }

return 0;
}