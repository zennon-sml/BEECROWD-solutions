#include <iostream>
using namespace std;

int main(){
    unsigned long long int graos;
    int n, tam, i, j;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> tam;
        if(tam == 64){
            cout << "1537228672809129 kg" << '\n';
        }else{
            graos = 1;
            for(j = 0;j < tam;j++){
                graos *= 2;
            }
            cout << graos/12/1000 << " kg" << "\n";
        }
    }

    return 0;
}