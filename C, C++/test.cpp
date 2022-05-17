#include <iostream>
using namespace std;

int main(){
    int a, i, j, n, num, test;
    cin >> n;
    for (i = 0;i < n;i++) {
        cin >> num;
        test = 0;
        for (j = 2;j < num;j++) {
            if (num % j == 0) {
                test++;
            }
        }
        if (test == 0) {
            cout << "Prime" << endl;
        }else {
            cout << "Not Prime" << endl;
        }
    }
    
    /*
    cout.precision(10);
    cout.setf(ios::fixed);
    */
    return 0;
}