#include <iostream>
using namespace std;

int main(){
    int abas, seq, i;
    string action;
    cin >> abas >> seq;
    for (i = 0;i < seq;i++) {
        cin >> action;
        if (action == "fechou") {
            abas += 1;
        }else {
            abas --;
        }
    }
    cout << abas << endl;

    return 0;
}