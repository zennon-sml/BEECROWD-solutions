#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string a, b, maior, menor;
    int tam;
    while(true){
        cin >> a >> b;
        if(a == "0" and b == "0"){
            break;
        }
        tam = min(a.length(), b.length());
        if(tam == a.length()){
            maior = "1000000000" + b;
            menor = "1000000000" + a;
        }else{
            maior = "1000000000" + a;
            menor = "1000000000" + b;
        }
        int carry = 0, i = maior.length()-1, j = menor.length()-1;
        bool sim = false;
        while(tam > 0){
            stringstream stream;
            if(sim){
                maior[i]
            }
        }

    }

    return 0;
}