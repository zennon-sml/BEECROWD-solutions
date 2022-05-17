#include <cmath>
#include <iostream>
#include <math.h>

int main(){
    float n, n1, n2;
    std::cin >> n;
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
    n1 = pow((1+std::sqrt(5))/2, n);
    n2 = pow((1-std::sqrt(5))/2, n);
    std::cout << (n1 - n2) / std::sqrt(5) << std::endl;

    return 0;
}