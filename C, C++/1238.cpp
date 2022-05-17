#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n, i, len, len0, len1;
    string str0, str1, restr;
    cin >> n;
    while(n--){
        cin >> str0 >> str1;
        restr = "";
        len = max(str0.length(), str1.length());
        len0 = str0.length();
        len1 = str1.length();
        for (i = 0;i < len;i++) {
            if(len0 > i){
                restr += str0[i];
            }
            if(len1 > i){
                restr += str1[i];
            }
        }
        cout << restr << endl;
    }

    return 0;
}