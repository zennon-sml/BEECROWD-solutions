#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, l, t;
    char letras[51];
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> l;
        t = 0;
        for(int j = 0;j < l;j++){
            cin >> letras;
            for(int j1 = 0;j1 < strlen(letras);j1++){
                t += (int(letras[j1]) - 65) + j + j1;
                // cout << int(letras[j1]) - 65 << " " << i <<" "<< j1 << "\n"; 
            }
        }
        cout << t << "\n";
    }

    return 0;
}