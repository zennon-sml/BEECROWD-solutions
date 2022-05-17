#include <iostream>
using namespace std;

int main(){
    int dia, mes, natal = 366,falta;
    while(cin >> mes >> dia){
    falta = (mes-1)*30 + dia+11;
    cout << falta;
    if(falta == natal){
        cout << "E natal!" << endl;
    } else if (natal-falta == 1){
        cout << "E vespera de natal!" << endl;
    } else if (falta<natal) {
        cout << "Faltam "<< natal-falta <<" dias para o natal!" << endl;
    } else if (falta > natal) {
       cout << "Ja passou!" << endl;
    }
    
    }

    return 0;
}