#include <iostream>

using namespace std;
int main(){
    int m;
while(cin >> m){
    if (m >= 0 and m < 90 or m == 360) {
        cout << "Bom Dia!!" << endl;
    }else if (m >= 90 and m < 180) {
        cout << "Boa Tarde!!" << endl;
    }else if (m >= 180 and m < 270) {
        cout << "Boa Noite!!" << endl;
    }else {
        cout << "De Madrugada!!" << endl;
    }
}
return 0;    
}