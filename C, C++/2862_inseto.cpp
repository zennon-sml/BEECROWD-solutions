#include <iostream>

using namespace std;

int main(){
    int n, num, i;
    cin >> n;
    for(i = 0;i < n;i ++){
        cin >> num;
        if(num > 8000){
            cout << "Mais de 8000!" << '\n';
        }else{
            cout << "Inseto!" << '\n';
        }
    }

return 0;
}
