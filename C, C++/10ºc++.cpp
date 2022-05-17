#include <bits/stdc++.h>

using namespace std;
	int main(){
	int a11,a12;
	double a13;
	int b21,b22;
	double b23;	
	cin >> a11 >> a12 >> a13;
	cin >> b21 >> b22 >> b23;
	cout << fixed;
	cout <<"VALOR A PAGAR: R$ " << setprecision(2) << a12*a13+b22*b23 <<endl;
	return 0;
		
		
}
