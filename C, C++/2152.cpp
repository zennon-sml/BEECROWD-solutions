#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char n[501];
    scanf("%[^\n\r]", n);
    if(strlen(n)<81){
        cout << "YES" << endl;
    } else{
        cout <<"NO" << endl;
    }
    return 0;
}