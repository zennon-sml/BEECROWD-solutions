#include <iostream>
using namespace std;

int main(){
	int n, i, dias;
	cin >> n;
	double comida;
	for(i = 0;i < n; i++){
		cin >> comida;
		dias = 0;
		while(true){
			if(comida <= 1.0){
				break;
			}
			comida /= 2;
			dias++;
		}
		cout << dias << " dias" << '\n';	
	}
    
return 0;
}
