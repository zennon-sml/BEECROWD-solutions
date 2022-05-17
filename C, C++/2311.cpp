#include <iostream>
#include <ostream>
#include <string>

int main(){
    int n, i;
    double difficult, score[7], less, max,total;
    std::string diver;
    std::cin >> n;
    while (n--) {
        std::cin >> diver >> difficult;
        for (i = 0;i < 7;i++) {
            std::cin >> score[i];
            total += score[i];
        }
        max = score[0];
        less = score[0];
        for (i = 0;i < 7;i++) {
            if (max < score[i]) {
                max = score[i];
            }
            if (less > score[i]) {
                less = score[i];
            }

        }
        std::cout.precision(2);
        std::cout.setf(std::ios::fixed);
        std::cout << diver << " " << (total-less-max)*difficult << std::endl;
        total = 0;
    }

    return 0;
}