#include <iostream>

int main(){
    int n, i;
    std::cin >> n;
    int vet[n];
    for(i = 0;i < n;i++){
        std::cin >> vet[i];
    }
    for(i = 0;i < n-1;i++){
        if (vet[i+1] < vet[i]) {
            std::cout << i+2 << std::endl;
            return 0;
        }
    }
    std::cout << 0 << std::endl;
    return 0;
}