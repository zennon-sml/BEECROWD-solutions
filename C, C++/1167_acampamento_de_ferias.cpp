#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void deletarV(int v[], int size, int kill){
    int nV[size-1];
    int nIndex = 0;
    for(int i = 0;i < size;i++){
        if(i != kill){
            nV[nIndex] = v[i];
            nIndex++;
        }
    }
}

void papocar1(int v[], int size){
    int place = 0;
    bool par_impar;
    for(int i = 0;i < size;i++){
        if(v[place] % 2 == 0){
            par_impar = true;
        }else{
            par_impar = false;
        }
        while(v[place] > size){
            v[place] = v[place] % size;
        }
        int papocado;
        for(int j = 0;j < size;j++){
            if(par_impar){
                if(v[place] + place > size){
                    papocado = (v[place] + place) - size;  
                }else{
                    papocado = v[place];
                }
                while(v[papocado] == 0){
                    if(papocado > size){
                        papocado = 0;
                    }else{
                        papocado ++;
                    }
                }
                v[papocado] = 0;
                cout << papocado << "\n";
            }else{
                cout << "impar" << "\n";
            }
        }
    }
}

int main(){
    int n;
    while(cin >> n && n != 0){
        string p[n];
        int values[n];
        for(int i = 0;i < n;i++){
            cin >> p[i] >> values[i];
        }
        papocar1(values, n);
    }

    return 0;  
}