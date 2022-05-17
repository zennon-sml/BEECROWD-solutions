#include <iostream>
using namespace std;

int main(){
    int n, i, j, mat[100][100] = {}, temp = 1;
    bool is = false;
    while(cin >> n and n != 0){
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            mat[i][j] = 1;
            if (i > 0 and j > 0 and i < n-1 and j < n-1) {
               mat[i][j] += mat[temp][temp];
            } 
            if (j == i) {
                is = true;
            }
        }
        if(is == true){
            temp+=1;
            is = false;
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    }

    return 0;
}