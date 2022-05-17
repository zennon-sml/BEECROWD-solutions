#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i, n, l, c, cc, pag = 0, lin = 0, tam;
    bool test = false;
    string str;
    while (cin >> n >> l >> c) {
        getchar();
        cin >> str;
        tam = str.length();
        //cout << "a" << endl;
        cc = c;
        for (i = 0;i < tam;i++) {        
            //cout << str[c-1] << endl;
            if (lin == l) {
                pag++;
                lin = 0;
            }
            if (str[cc-1] == ' ') {
                //cout << pag << endl;
                lin++;
                cc += c;
            }else{
                while(test == false){
                cc-=1;
                //cout << pag << endl;
                if (str[cc-1] == ' ') {
                    lin++;
                    cc += c;
                    test = true;
                    }
                }
            }
        }
    cout << lin << endl;
    cout << pag << endl;
    test = false;
    pag = lin = 0;
    }

    return 0;
}