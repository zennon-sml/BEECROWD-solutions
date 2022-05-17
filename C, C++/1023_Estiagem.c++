#include <iostream>

using namespace std;
int main(){
    int j, i, n, pe, sum, city = 0;
    
    while(cin >> n && n != 0){
        city ++;
        int media[n*2];
        for(i = 0;i < n+1;i++){
            cin >> pe >> sum;
            media[i] = pe;
            i++;
            media[i] = sum;
            
        }
        cout << "Cidade# " << city << ":" << endl;
        n *= 2;
        for(j = 0;j < n;j+=2){
            cout << media[j] <<"-"<< media[j+1] << endl;
        }
    }
}