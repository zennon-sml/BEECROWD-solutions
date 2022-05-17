#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    string str[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    while (n--) {
        cin >> x >> y;
        cout << str[x+y] << endl;
    }

    return 0;
}