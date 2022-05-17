#include <iostream>
using namespace std;

int main(){
    int n1, i;
    cin >> n1;
    for (i = 0;i < n1; i++) {
    int n, n1, i, j, t = 0;
    cin >> n;
    int x[n][n];
    for (i = 0;i < n; i++) {
        for (j = 0;j < n;j++) {
            x[i][j] = 0;
        }
    }
    for (i = 0;i < 1;i++) {
        for (j = 0;j < n;j++) {
            x[j][i] = 1;
            x[j][i+j] = 1;
        }
        
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
           if (x[j][i] == 0) {
               x[j][i] = x[j-1][i-1] + x[j-1][i];
           }
            
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < i+1;j++) {
            t+= x[i][j];
        }
    }
    
    cout << t << endl;
    t = 0;
    }
    return 0;
}