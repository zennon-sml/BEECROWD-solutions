#include <iostream>

int main(){
    float hotd, partc;
    std::cin >> hotd >> partc;
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);
    std::cout << hotd/partc << std::endl;

    return 0;
}