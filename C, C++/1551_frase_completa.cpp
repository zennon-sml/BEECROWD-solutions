#include <iostream>
#include <string>

using namespace std;
int somar(int alf[]){
    int i, t = 0;
    for(i = 0;i < 26; i++){
        t += alf[i];
    }
    return t;
}
int quantos(string frase){
    int j;
    int alf[26] = {};
    for(j = 0;j < frase.length(); j++){
        if(alf[frase[j]-97] == 0){
            alf[frase[j]-97] = 1;
        }
    }
    return somar(alf);
}

int main(){
    int n, i, letras;
    cin >> n;
    getchar();
    for(i = 0;i < n;i++){
        string frase;
        getline(cin, frase);
        letras = quantos(frase);
        if(letras == 26){
            cout << "frase completa" << '\n';
        }
        else if(letras > 12){
            cout << "frase quase completa" << '\n';
        }else{
            cout << "frase mal elaborada" << '\n';
        }
    }

return 0;
}