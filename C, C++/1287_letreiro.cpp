#include <iostream>
#include <string>
using namespace std;

void limpar(string num){
    int i, n;
    string limpa = "";
    for(i = 0;i < num.length(); i++){
        if(num[i] > -1 && num[i] < 10){
            limpa += num[i];
        }else if(num[i] == 79 || num[i] == 111){
            limpa += char(0); 
        }else if(num[i] == 108){
            limpa += char(1);
        }
    }
    cout << limpa << '\n';
}

int main() {
    string inteiro;
    while(true){
        getline(cin, inteiro);
        limpar(inteiro);
    }
//    num = stoi(str);
   return 0;
}