#include <iostream>

using namespace std;

int main(){
    int m, moves, p;
    int pos[3];
    while(cin >> m && m != 0){
        moves = 0, p = 1;
        for(int i = 0;i < m;i++){
            cin >> pos[0] >> pos[1] >> pos[2];
            if(p == 1){
                if (pos[1] == 1){
                    if(pos[0] == 0){
                        p = 0;
                        moves++;
                    }else if(pos[2] == 0){
                        p = 2;
                        moves++;
                    }
                }
            }else if(p == 0){
                if(pos[0] == 1){
                    if(pos[1] == 0){
                        p = 1;
                        moves++;
                    }else{ 
                        p = 2;
                        moves += 2;
                    }
                }
            }else{
                if(pos[2] == 1){
                    if(pos[1] == 0){
                        p = 1;
                        moves++;
                    }else{
                        p = 0;
                        moves += 2;
                    }
                }
            }
        }
        cout << moves << "\n";
    }


    return 0;
}