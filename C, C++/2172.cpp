#include <iostream>

int main(){
    int mult, n;
    long total;
    while (std::cin >> mult >> n and mult != 0 and n != 0) {
        total = mult*n;
        std::cout << total << std::endl;
    }

    return 0;
}