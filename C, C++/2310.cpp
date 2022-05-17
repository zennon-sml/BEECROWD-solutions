#include <iostream>
#include <string>

int main(){
    int n, i;
    double sbaatemp[4], sbasuc[4],totalsbaat[4] = {}, totalsbasu[4] = {};
    std::string name, output[4] = {"Pontos de Saque: ", "Pontos de Bloqueio: ", "Pontos de Ataque: "};
    std::cin >> n; 
    while (n--) {
    std::cin >> name; 
    for (i = 0;i < 3;i++) {
        std::cin >> sbaatemp[i];
        totalsbaat[i] += sbaatemp[i];
    }
    for (i = 0;i < 3;i++) {
        std::cin >> sbasuc[i]; 
        totalsbasu[i] += sbasuc[i];
    }
    }
    for (i = 0;i < 3;i++) {
        std::cout << output[i];
        std::cout.precision(2);
        std::cout.setf(std::ios::fixed);
        std::cout << (totalsbasu[i]*100)/totalsbaat[i] << " %." << std::endl;
        //totalsbaat[i] = 100
        //totalsbasu[i] = x
    }

    return 0;
}