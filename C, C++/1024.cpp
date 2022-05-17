#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, nstr;
    string str;
    cin >> n;
    getchar();
    while(n--){
        getline(cin, str);
        nstr = str.length();
        for(i = 0;i < nstr;i++){
            if(char(str[i]) >= 65 and char(str[i]) <= 90 or char(str[i]) >= 97 and char(str[i]) <= 122){
                str[i] = char(str[i]+3);
                //cout << str[i] << endl;    
            }
        }
        reverse(str.begin(), str.end());
        for(i = nstr/2;i < nstr;i++){
            str[i] = char(str[i]-1);
        }
        cout << str << endl;  

    }
    return 0;
}