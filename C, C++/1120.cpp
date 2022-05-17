#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string digt, num;
    int i, nstr, j;
    while(true){
        cin >> digt >> num;
        //cout << num[i] << digt[0] <<endl;
        if(digt == "0" and num == "0"){break;}
        nstr = num.length();
        for(i = 0,j=0;i < 100;i++){
            if(num[i] == digt[0]){
                //cout << "asd" << endl;
                //cout << num[i] << digt[0] <<endl;
                num.erase(i);
                //j++;
            }
        }

        cout << num << endl;

    }

    return 0;
}