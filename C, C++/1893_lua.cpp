#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if( m >= 97 ){
        cout << "cheia" << '\n';
    } else if (m < 97 && n > m && m > 2 || n == m ){
        cout << "minguante" << '\n';
    } else if( m < 97 && m > 2 ){
        cout << "crescente" << '\n';
    } else {
        cout << "nova" << '\n';
    }

return 0;
}