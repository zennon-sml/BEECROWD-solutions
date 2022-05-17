#include <iostream>
#include <string>

int main(){
    std::string tweet;
    std::getline(std::cin, tweet);
    if (tweet.size() <= 140) {
        std::cout << "TWEET" << std::endl;
    }else {
        std::cout << "MUTE" << std::endl;
    }
    return 0;
}