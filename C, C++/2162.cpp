#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int h[n];
    bool se = false;
    for (i = 0;i < n;i++) {
        cin >> h[i];
    }
    for (i = 0;i < n-2;i++) {
        if (h[i] > h[i+1] and h[i+1] < h[i+2]) {
            se = true;
        }
        if (h[i] < h[i+1] and h[i+1] > h[i+2]) {
            se = true;
        }
        
    }
    if (n == 1) {
        se = true;
    }
    if (n == 2 and h[0]!=h[1]) {
        se = true;
    }
    if (se == true) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}