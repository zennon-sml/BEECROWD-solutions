#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x, i = 0, j;
    string str;
    cin >> str >> n;
    while (i < n) {
        cin >> x;
        char msm[n];
        msm[i] = str[x-1];
        cout << msm[i];
        i++;
        if (i == n) {
            for (j = 0;j < i;j++) {
        cout << msm[j] << endl;
            }
        }
    }
    //for (j = 0;j < i;j++) {
    //    cout << message[j] << endl;
    //}

    return 0;
}