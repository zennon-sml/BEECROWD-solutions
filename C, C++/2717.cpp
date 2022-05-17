#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if (a+b <= n) {
        cout << "Farei hoje!" << endl;
    }else {
        cout << "Deixa para amanha!" << endl;
    }

    return 0;
}