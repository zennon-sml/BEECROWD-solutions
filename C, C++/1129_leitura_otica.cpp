#include <iostream>
using namespace std;

int main(){
    int n, i, j, choice, aswer, choices;
    string letter[5] = {"A", "B", "C", "D", "E"};
    while(cin >> n){
        for(i = 0;i < n; i++){
            choices = 0;
            for(j = 0;j < 5; j++){
                cin >> choice;
                if(choice <= 127){
                    aswer = j;
                    choices++;
                }
            }
            if(choices == 1){
            cout << letter[aswer] << endl;
            }else{
                cout << '*' << endl;
            }

        }
    }

return 0;
}
