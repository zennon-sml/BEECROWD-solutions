#include <bits/stdc++.h>

using namespace std;
int main(){
	double n;
	scanf("%lf", &n);
	if(n<=400){ printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 \n", (n*15/100)+n,n*15/100); }
	if(n>=400.01&&n<=800){ printf("Novo salario: %.2lf\nReajust-e ganho: %.2lf\nEm percentual: 12 %\n", (n*12/100)+n,n*12/100); }
	if(n>=800.01&&n<=1200){ printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n", (n*10/100)+n,n*10/100); }
	if(n>=1200.01&&n<=2000){ printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n", (n*7/100)+n,n*7/100); }
	if(n>2000.01){ printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n", (n*4/100)+n,n*4/100); }

return 0;
}
