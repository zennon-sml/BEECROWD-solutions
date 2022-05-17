#include <iostream>
#include <ostream>

int main(){
    int cr[4] = {},boole = 0;
    std::cin >> cr[0] >> cr[1] >> cr[2];
    //cr[0]
    if (cr[0] - cr[1] == cr[3] or cr[0] - cr[2] == cr[3]){
        boole = 1;
    }
    //cr[1]
    else if (cr[1] - cr[0] == cr[3] or cr[1] - cr[2] == cr[3]){
        boole = 1;
    }
    //cr[2]
    else if (cr[2] - cr[0] == cr[3] or cr[2] - cr[1] == cr[3]){
        boole = 1;
    }
    //cr[0]+-cr[1]
    else if (cr[0]+cr[1] - cr[2] == cr[3]){
        boole = 1;
    }
    //cr[0]+-cr[2]
    else if (cr[0]+cr[2] - cr[1] == cr[3]){
        boole = 1;
    }
    //cr[1]+-cr[2]
    else if (cr[1]+cr[2] - cr[0] == cr[3]){
        boole = 1;
    }
    //true or false
    if (boole) {
        std::cout << "S" << std::endl;
    }else {
        std::cout << "N" << std::endl;
    }
    return 0;
}