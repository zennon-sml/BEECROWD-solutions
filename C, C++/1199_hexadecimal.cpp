#include <bits/stdc++.h>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int i, j, in;
    string vrau;
    
    while(cin >> vrau && vrau != "-1"){
        if(vrau[1] == 'x'){
            stringstream stream; 
            stream << vrau;
            stream >> hex >> in;
            printf("%d\n", in);
        }else{
            stringstream stream;
            stream << vrau;
            stream >> in;
            printf("0x%X\n", in);
            
        }
    }
    return 0;
}