#include <iostream>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    cout.precision(2);
    cout.setf(ios::fixed);
    if (a<b) {
        cout << ((a-b)*100) / a*-1 << "%" << endl;
    }else {
        cout << ((a-b)*100) / a << "%" << endl;
    }
    
    return 0;
}