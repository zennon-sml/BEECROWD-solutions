#include <iostream>

int main(){
    int n, id, game, gameplay, sum = 0;
    while (std::cin >> n >> id) {
        sum = 0;
        while (n>0) {n--;
        std::cin >> gameplay >> game;
        if (gameplay == id and game == 0) {
            sum++;
            }
        }
        std::cout <<"esse "<< sum << std::endl;
        
    }
    
    return 0;
}