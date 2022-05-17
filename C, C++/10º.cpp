#include <bits/stdc++.h>

using namespace std;
int main(){
	int a11,a12;
	double a13;
	int b21,b22;
	double b23;
	scanf("%d %d", &a11,&a12);
	scanf("%lf", &a13);
	scanf("%d %d", &b21,&b22);
	scanf("%lf", &b23);
	printf("VALOR A PAGAR: R$ %.2lf\n", a12*a13+b22*b23);
	return 0;
}
