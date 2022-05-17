#include <iostream>
using namespace std;


int main(){
    int n,i;
    cin >> n;
    int x[n];
    for (i = 0;i < n;i++) {
        cin >> x[i];
    }
    int n1, i1;
    cin >> n1;
    int x1[n1];
    for (i = 0;i < n1;i++) {
        cin >> x1[i];
    }
    for (i1 = 0;i1 < n1;i1++) {
        for (i = 0;i < n;i++) {
        if(x1[i1] == x[i]){
            x[i] = 0;
        }
        }
    }for (i = 0;i < n;i++) {
        if(x[i] != 0){
            cout << x[i];
            if (i < n-1) {
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }
    


    return 0;
}