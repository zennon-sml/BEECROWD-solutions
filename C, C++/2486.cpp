#include <iostream>
#include <string>
using namespace std;

int main(){
    int total, talim, talimtemp, valor, i, cvalor[8] = {120, 85, 85, 70, 56, 50, 34};
    string C, c[8] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
    
    while (cin >> total and total != 0) {
        valor = 0;
        while (total--) {
        cin >> talim;
        getchar();
        getline(cin, C);
        for (i = 0;i < 8;i++) {
            if (C == c[i]) {
                valor += cvalor[i] * talim;
            }
        }
        }
        if (valor > 109 and valor < 131) {
        cout << valor << " mg" << endl;
        }else if (valor < 110) {
            cout << "Mais " << 110-valor << " mg" << endl;
        }else {
            cout << "Menos " << valor-130 << " mg" << endl;
        }
        
    } 


    return 0;
}