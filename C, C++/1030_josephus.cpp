#include <iostream>
using namespace std;

int Sum(int arr[]){
    int i, sum = 0, arrSize = *(&arr + 1) - arr;
    for(i=0;i < arrSize; i++){
        if(arr[i] > 0){
            sum++;
        }
    }
    return sum;
}

int main(){
    int n, i, j, j1, guys, jumps;
    cin >> n;
    for(i = 0;i < n; i++){
        cin >> guys >> jumps;
        int sum = 0, circle[guys] = {0}, jumps1 = jumps;
        j1 = 0;
        while(sum < guys-2){
            for(j = 0;j < jumps; j++){
                if(j1+j> guys-1){j1 = 0;}
                if(circle[j1+j] == 0 && j == jumps1-1){
                    circle[j1+j]++;
                    j1++;
                }else if(circle[j1+j] == 1){
                    j--;
                    j1++;
                }else{
                    j++;}
            }
            for(i=0;i < guys; i++){
            cout << circle[i] << " ";
        }
        cout << endl;
        }
        }
        

    return 0;
}