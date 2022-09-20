#include <iostream>
#include <string>
#include <climits>
using namespace std;

string limpar(string num){
    int i, n;
    string limpa = "";
    for(i = 0;i < num.length(); i++){
        if(num[i] > 47 && num[i] < 58){
            limpa += num[i];
        }else if(num[i] == char(79) || num[i] == char(111)){
            limpa += "0"; 
        }else if(num[i] == char(108)){
            limpa += "1";
        }
    }
    return limpa;
}

int main() {
    string inteiro;
    int valor;
    while(getline(cin, inteiro)){
            inteiro = limpar(inteiro);
            if(inteiro.length() == 0){
                cout << "error" << '\n';
            }else{
                try{
                    valor = stoi(inteiro);
                    if(valor > INT_MAX){
                        cout << "error" << '\n';
                    }else{
                        cout << valor << '\n';
                    }
                }catch(const out_of_range& e){
                    cout << "error" << '\n';
                }
            }
    }
//    num = stoi(str);
   return 0;
}