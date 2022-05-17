#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    string n1;
    cin >> n;
    while(n--){
        cin >> n1;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << n1.size()*0.01 << endl;
    }

    return 0;
}