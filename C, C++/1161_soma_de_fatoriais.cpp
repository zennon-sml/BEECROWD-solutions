#include <iostream>
using namespace std;

long fatorial(int n){
	long long int sum = 1, i;
	for(i = n;i >= 1; i--){
	    sum *= i;
	}
	return sum;
}

int main(){
    int n1, n2;
	while(cin >> n1 >> n2){
		cout << fatorial(n1) + fatorial(n2) << '\n';
	}
    
return 0;
}
