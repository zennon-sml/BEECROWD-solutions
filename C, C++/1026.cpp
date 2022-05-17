#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i, n, a1, b1, z;
    cin >> a1 >> b1;
    int a[a1], b[b1];
    for (i = a1; i > 0;i --) {
        z = pow(2, i);
        if (z%2 == 0) {
            a[i] = 0;
        }
        else {
            a[i] = 1;
        }
        
    }
    for (i = b1; i > 0;i --) {
        z = pow(2, i);
        if (z%2 == 0) {
            b[i] = 0;
        }
        else {
            b[i] = 1;
        }
        cout << b[i] << " ";
        
    }
    
    

    return 0;
}
