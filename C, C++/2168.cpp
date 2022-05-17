#include <iostream>

int main(){
    int n, i, j,sum = 0;
    std::cin >>n;
    int corners[n+1][n+1];
    for (i = 0;i < n+1;i++) {
        for (j = 0;j < n+1;j++) {
            std::cin >> corners[i][j];
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++) {
            if ((corners[i][j]+corners[i][j+1]+corners[i+1][j+1]+corners[i+1][j]) > 1) {
                std::cout << "S";
            }else {
                std::cout << "U";
            }
        }
        std::cout << std::endl;  
    }
    return 0;
}