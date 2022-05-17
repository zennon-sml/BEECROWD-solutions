#include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;

bool igual(int vagao[],int seq[], int n1){
	int i;
	for(i = 0;i < n1; i++){
		if(vagao[i] != seq[i]){
			return false;
		}
	}
	return true;
}

int cadeobixo(int vagao[],int x){
	for(int i = 0;i < sizeof(vagao)/sizeof(vagao[0]); i++){
		cout << vagao[i] << " ";
		if(x == vagao[i]){
			return i;
		}
	}
}

void printar(int z[]){
    for(int i=0;i < 7;i++){
        cout << z[i] << " ";
    }
    cout << '\n';
}
int main(){
	int n, n1, i, j;
	cin >> n;
	for(j = 0;j < n; j++){
		cin >> n1;
		int x, vagao[n1], seq[n1];
		for(i = 0;i < n1; i++){
			seq[i] = i+1;
			cin >> x;
			vagao[i] = x;
		}
		cout << vagao[5] << '\n';
		if(igual(vagao, seq, n1)){
			cout << "Optimal train swapping takes 0 swaps." << '\n';
		}else{
			i = n1-1;
			int j = cadeobixo(vagao, seq[i]), temp, times = 0;
			cout << "esse " << j << '\n';
			while(i > 0){
                if(vagao[i] != seq[i]){
                    cout << vagao[j] << '\n';
                    cout << "esse " << j << '\n1';
                    temp = vagao[j];
                    vagao[j] = vagao[j+1];
                    vagao[j+1] = temp;
                    times++;
                    j++;
                }else{
                    i--;
                    j = cadeobixo(vagao, seq[i]);
                }
			}
			cout << "Optimal train swapping takes " << times << " swaps." << '\n';
		}

	}

return 0;
}
