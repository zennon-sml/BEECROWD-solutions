#include <cmath>
#include <ios>
#include <iostream>

int main(){
    double n, sqrt2 = 1;
    int i, j;
    std::cin >> n;
    for(i = 1,j = 1;i < n;i++,j++) {
        sqrt2 += i + j / i; 
        if (i == 2) {
            j --;
        }
    }
    std::cout.precision(10);
    std::cout.setf(std::ios::fixed);
    std::cout << sqrt2 << std::endl;

    return 0;
}