#include <iostream>
using namespace std;

int main(){
    int p, j1, j2, roubo, acusar;
    cin >> p >> j1 >> j2 >> roubo >> acusar;
    if (p == 1 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 1) {
        //j1 ganha na soma e no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 1) {
         //j1 ganha na soma e no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 1 and acusar  == 1) {
        //j1 ganha na soma e perder no roubo
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 1 and acusar  == 1) {
        //j1 ganha na soma e perder no roubo
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e no roubo
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e no roubo
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 1 and acusar  == 0) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 == 0 and roubo == 1 and acusar  == 0) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 != 0 and roubo == 1 and acusar  == 0) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 1 and acusar  == 0) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 1) {
        //j2 ganha na soma e perde no roubo
        cout << "Jogador 1 ganha!" << endl;
    } 
    ///// 0 = 0 | 1 = 1
    else if (p == 1 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 0) {
        //j2 ganha na soma
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 0) {
        //j2 ganha na soma
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 0 and acusar  == 0) {
        //j1 ganha na soma
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 0 and acusar  == 0){
        //j1 ganha na soma
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 != 0 and roubo == 1 and acusar  == 1) {
        //j2 ganha na soma
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 == 0 and roubo == 1 and acusar  == 1) {
        //j2 ganha na soma
        cout << "Jogador 2 ganha!" << endl;
    } else if (p == 1 and (j1+j2)%2 == 0 and roubo == 1 and acusar  == 1) {
        //j1 ganha na soma
        cout << "Jogador 1 ganha!" << endl;
    } else if (p == 0 and (j1+j2)%2 != 0 and roubo == 1 and acusar  == 1){
        //j1 ganha na soma
        cout << "Jogador 1 ganha!" << endl;
    }

    return 0;
}