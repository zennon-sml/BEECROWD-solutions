#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mariap, joaop;
    int p, d;
    for(int i = 0;i < n;i++){
        mariap = 0;
        joaop = 0;
        for(int j = 0;j < 3;j++){
            cin >> p >> d;
            joaop += p*d;
        }
        for(int j = 0;j < 3;j++){
            cin >> p >> d;
            mariap += p*d;
        }
        if(joaop > mariap){
            cout << "JOAO" << "\n";
        }else if(joaop < mariap){
            cout << "MARIA" << "\n";
        }else {
            cout << "JOAO" << "\n";
        }
    }

    return 0;
}