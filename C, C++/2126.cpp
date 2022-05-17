#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    string n1, n2;
    int i, j, sub = 0, caso = 0, lastcase = 0;
    while(cin >> n1 >> n2){
        caso++;
        lastcase = sub = 0;
        for (j = 0;j <= n2.size()-n1.size();j++) {
            if (n2.substr(j,n1.size()) == n1) {
                sub ++;
                lastcase = j+1;
            }
        }
        if (sub>0) {
            cout << "Caso #" << caso << ":" << endl;
            cout << "Qtd.Subsequencias: " << sub << endl;
            cout << "Pos: " << lastcase << endl; 
        } else {
            cout << "Caso #" << caso << ":" << endl;
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
    }

    return 0;
}