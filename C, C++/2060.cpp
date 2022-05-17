#include <iostream>
using namespace std;

int main(){
    int n, n1, i, j;
    cin >> n;
    int vet[6] = {};
    for (i = 0;i < n;i++) {
        cin >> n1;
        for (j = 2;j < 6;j++) {
            if (n1%j == 0) {
                vet[j] += 1; 
            }
        }
    }
    for (i = 2;i < 6;i++) {
        cout << vet[i] << " Multiplo(s) de " << i << endl;
    }

    return 0;
}
