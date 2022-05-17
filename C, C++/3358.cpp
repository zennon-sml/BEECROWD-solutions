#include <iostream>
#include <string.h>

using namespace std;
int main(){
    int n, i, j, t3;
    string sobren;
    cin >> n;

    for (i = 0;i < n;i++) {
        cin >> sobren;
        sobren[0] = tolower(sobren[0]);
        //cout << sobren[0] << endl;
        t3 = 0;
        for (j = 0;j < sobren.length();j++) {
            if (sobren[j] != 'a' and sobren[j] != 'e' and sobren[j] != 'i' and sobren[j] != 'o' and sobren[j] != 'u') {
                t3 ++;
            }else {
                t3 = 0;
            }
            if (t3 == 3) {
                sobren[0] = toupper(sobren[0]);
                cout << sobren << " nao eh facil" << endl;
                break;
            }
        }
        if (t3 < 3) {
            sobren[0] = toupper(sobren[0]);
            cout << sobren << " eh facil" << endl;
        }
    }
    return 0;
}