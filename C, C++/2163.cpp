#include <iostream>

int main(){
    int l, l1, c, c1, i, j;
    std::cin >> l >> c;
    int xy[l][c],cord[2] = {},soma;
    for (i = 0;i < l;i++) {
        for (j = 0;j < c;j++) {
            std::cin >> xy[i][j];
        }
    }
    for (i = 1;i < l-1;i++) {
        for (j = 1;j < c-1;j++) {
            if (xy[i][j] == 42) {
                soma=0;
                for (l1 = i-1;l1 <= i+1;l1++) {
                    for (c1 = j-1;c1 <= j+1;c1++) {
                            soma+=xy[l1][c1];
                            if (soma == 98) {
                                cord[0] = i+1;
                                cord[1] = j+1;
                                std::cout << cord[0] << " " << cord[1] << std::endl;
                                return 0;
                            }
                    }
                }soma = 0;
            }
        }
    }
    std::cout << cord[0] << " " << cord[1] << std::endl;

    return 0;
}