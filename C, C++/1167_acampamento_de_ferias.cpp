#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int[] deletarV(int v[], int size, int kill){
    int nV[size-1];
    int nIndex = 0;
    for(int i = 0;i < size;i++){
        if(i != kill){
            nV[nIndex] = v[i];
            nIndex++;
        }
    }
    return nV;
}

int papocar1(int v[], int size){
    int place = 0;
    for(int i = 0;i < size;i++){
        bool par_impar;
        if(v[place] % 2 == 0){
            par_impar = true;
        }else{
            par_impar = false;
        }
        while(v[place] > size){
            v[place] = v[place] % size;
        }
        for(int j = 0;j < size;j++){
            if(par_impar){
                int place1 = size-v[place];
                v[place1] = 0;
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
    }

    return 0;  
}