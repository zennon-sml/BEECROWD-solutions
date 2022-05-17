#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int mar, con, i, nm, nc, w = 1;
    while(cin >> mar >> con && mar != 0 and con != 0){
        int marmo[mar], consu[con], x;
        for(i = 0;i < mar;i++){
            cin >> x;
            marmo[i] = x;
        }
        for(i = 0;i < con;i++){
            cin >> x;
            consu[i] = x;
        }
        sort(marmo,marmo + mar);
        // for(i = 0;i < mar;i++){
        //     cout << marmo[i] << " ";
        // }
        // cout << '\n';
        // for(i = 0;i < con;i++){
        //     cout << consu[i] << " ";
        // }
        // cout << '\n';
        printf("CASE# %d:\n", w);
        w += 1;
        for(i = 0;i < con; i++){
            bool sim = false;
            int j = 0;
            while(j < mar){
                if(marmo[j] == consu[i]){
                    sim = true;
                    break;
                }
                j++;
            }
            if(sim){
                printf("%d found at %d\n", consu[i], j+1);
            }else{
                printf("%d not found\n", consu[i]);
            }
        }
    }
    return 0;
}