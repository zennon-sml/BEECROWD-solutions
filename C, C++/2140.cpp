#include <iostream>
using namespace std;

int main(){
    int comp, pago,i,j,se;
    int vet[] = {2, 5, 10, 20, 50, 100};
    while(cin >> comp >> pago and comp != 0 and pago != 0){
        se = 0;
        for (i = 0;i < 7;i++) {
            for (j = 0;j < 7;j++) {
                if (comp+vet[i]+vet[j] == pago) {
                    se = 1;
                } 
            }
        }
        if (se) {
            cout << "possible" << endl;
        }else{
            cout << "impossible" << endl;
        }
    }


    return 0;
}