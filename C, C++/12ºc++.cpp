#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c,pi=3.14159;
	cout << fixed;;
	cin >> a >> b >> c;
	cout << fixed;
	cout << "TRIANGULO: " << setprecision(3) << a*c/2 << endl;
	cout << "CIRCULO: " << setprecision(3) << pow(c,2)*pi << endl;
	cout << "TRAPEZIO: " << setprecision(3) << (a+b)/2*c << endl;
	cout << "QUADRADO: " << setprecision(3) << pow(b,2) << endl;
	cout << "RETANGULO: " << setprecision(3) << a*b << endl;
	return 0;
	
}
