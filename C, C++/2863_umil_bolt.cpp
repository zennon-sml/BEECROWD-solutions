#include <iostream>

using namespace std;

int main(){
    int n, i;
    while(cin >> n){
        double min, num;
        cin >> min;
        for(i = 0;i < n-1;i++){
            cin >> num;
            if(min > num){
                min = num;
            }
        }
        cout << min << '\n';
    }

    return 0;
}