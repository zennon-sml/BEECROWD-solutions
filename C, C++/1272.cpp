#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, i, j, test = 0, count = 0,count1 = 0;
    cin >> n;
    getchar();
    string z,zz[51];
    while(n--) {
       std::getline (std::cin,z);
       int x =  z.size();
       for(j = 0;j < x ;j++){
           if(z[j] != ' ' and test == 0){
               zz[count] = z[j];
               test ++;
               count ++;
               count1 ++;
           }
           else if(z[j] == ' '){
               test = 0;
           }
       }
       for(i = 0;i < count1;i++){cout << zz[i];}
       cout << endl;
       count1 = 0;
       count = 0;
       test = 0;
        
    }
    return 0;
}