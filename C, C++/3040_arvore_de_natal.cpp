#include <iostream>

using namespace std;

bool bonita(int a, int d, int g){
   if(a >= 200 && a <= 300 && d >= 50 && g >= 150){
    return true;
   }
   return false;
}

int main(){
    int n;
    int a, d, g;
    cin >> n;
    while(n > 0){
        n--;
        cin >> a >> d >> g;
        if(bonita(a,d,g)){
            cout << "Sim" << "\n";
        }else{
            cout << "Nao" << "\n";
        }
    }

    return 0;
}