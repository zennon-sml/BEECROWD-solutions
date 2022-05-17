#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c,pi=3.14159;
	scanf("%lf %lf %lf", &a,&b,&c);
	printf("TRIANGULO: %.3lf\n", a*c/2);
	printf("CIRCULO: %.3lf\n", pow(c,2)*pi);
	printf("TRAPEZIO: %.3lf\n", (a+b)/2*c);
	printf("QUADRADO: %.3lf\n", pow(b,2));
	printf("RETANGULO: %.3lf\n", a*b);
	return 0;
	
	
}
