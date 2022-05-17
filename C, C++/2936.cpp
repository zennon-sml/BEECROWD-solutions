#include <iostream>
using namespace std;

int main(){
    int m = 0, n[5], i;
    for (i = 0; i < 5; i++) {
        cin >> n[i];
        if (i == 0) {
            m += n[i] * 300;
        }
        else if (i == 1) {
            m += n[i] * 1500;
        }
        else if (i == 2) {
            m += n[i] * 600;
        }
        else if (i == 3) {
            m += n[i] * 1000;
        }
        else if (i == 4) {
            m += n[i] * 150;
        }
    }
    cout << m+225 << endl;

    return 0;
}