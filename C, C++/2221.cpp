#include <iostream>
#include <ostream>

int main(){
    int n, i,winner, bu, atkdefda[5],atkdefgu[5];
    std::cin >> n;
    for (i = 0;i < n;i++) {
        std::cin >> bu;
        std::cin >> atkdefda[0] >> atkdefda[1] >> atkdefda[2];
        std::cin >> atkdefgu[0] >> atkdefgu[1] >> atkdefgu[2];
        //Dabriel
        if (atkdefda[2]%2 == 0) {
            atkdefda[3] = (atkdefda[0]+atkdefda[1])/2+bu;
        }else {
            atkdefda[3] = (atkdefda[0]+atkdefda[1])/2;
        }
        //Guarte
        if (atkdefgu[2]%2 == 0) {
            atkdefgu[3] = (atkdefgu[0]+atkdefgu[1])/2+bu;
        }else {
            atkdefgu[3] = (atkdefgu[0]+atkdefgu[1])/2;
        }
        //winner
        if (atkdefda[3] > atkdefgu[3]) {
            std::cout << "Dabriel" << std::endl;
        } else if (atkdefda[3] == atkdefgu[3]) {
            std::cout << "Empate" << std::endl;
        } else {
            std::cout << "Guarte" << std::endl;
        }
    }

    return 0;
}