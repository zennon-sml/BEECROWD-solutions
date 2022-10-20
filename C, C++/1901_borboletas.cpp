#include <iostream>

using namespace std;
bool arrayTem(int visits1[], int num, int size){
    int i;
    for(i = 0; i < size; i++){
        if (num == visits1[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,i,j;
    cin >> n;
    int mapa[n][n];
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            cin >> mapa[i][j];
        }
    }
    int x, y, size = 1;
    int visits[n*2];
    cin >> x >> y;
    visits[0] = mapa[x-1][y-1];
    for(i = 0; i < n*2-1; i++){
        cin >> x >> y;
        if (arrayTem(visits,mapa[x-1][y-1],size)){
            visits[size] = mapa[x-1][y-1];
            size++;
        }
    }
    cout << size << '\n';
    // for (i = 0; i < size; i++){
    //     cout << visits[i] << " ";
    // }
    // cout << '\n';
    
    // for ( i = 0; i < n; i++){
    //     for ( j = 0; j < n; j++){
    //         cout << mapa[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    return 0;
}