#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int opening, n, i,nstars = 0;
    cin >> opening >> n;
    int fotons[n];
    for (i = 0; i < n; i++) {
        cin >> fotons[i];
        if (opening*fotons[i] >= 40*pow(1000, 2)) {
            nstars ++;
        }
    }
    cout << nstars << endl;

    return 0;
}