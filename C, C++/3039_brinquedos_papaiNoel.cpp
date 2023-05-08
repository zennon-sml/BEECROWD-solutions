#include <iostream>

using namespace std;

int main(){
    int n, m = 0, f = 0;
    cin >> n;
    char nome[300];
    char sexo;
    char menino = 'M';
    while(n > 0){
        n--;
        cin >> nome >> sexo;
        if(sexo == menino){
            m++;
        }else{
            f++;
        }
    }
    cout << m << " carrinhos\n" << f << " bonecas\n";

    return 0;
}