#include <iostream>
using namespace std;

int main(){
    int a1,a2,a3,m1,m2,m3; 
    cin >> a1 >> a2 >> a3;
    m1 = a2*2 + a3*4;
    m2 = a1*2 + a3*2;
    m3 = a1*4 + a2*2;
    //cout << m1 <<m2 <<m3 << endl;
    if (m1 <= m2 and m1 <= m3) {
        cout << m1 << endl;
    }
    else if (m2 <= m1 and m2 <= m3) {
        cout << m2 << endl;
    }else if (m3 <= m1 and m3 <= m2) {
        cout << m3 << endl;
    }

    return 0;
}
