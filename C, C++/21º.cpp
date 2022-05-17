#include <bits/stdc++.h>

using namespace std;
int main(){
	double n;
	scanf("%lf", &n);
	int no;
	printf("NOTAS:\n");
	no=n*100;
	printf("%d nota(s) de R$ 100.00\n", no/10000);
	no=no%10000;
	printf("%d nota(s) de R$ 50.00\n", no/5000);
	no=no%5000;
	printf("%d nota(s) de R$ 20.00\n", no/2000);
	no=no%2000;
	printf("%d nota(s) de R$ 10.00\n", no/1000);
	no=no%1000;
	printf("%d nota(s) de R$ 5.00\n", no/500);
	no=no%500;
	printf("%d nota(s) de R$ 2.00\n", no/200);
	printf("MOEDAS:\n");
	no=no%200;
	printf("%d moeda(s) de R$ 1.00\n", no/100);
	no=no%100;
	printf("%d moeda(s) de R$ 0.50\n", no/50);
	no=no%50;
	printf("%d moeda(s) de R$ 0.25\n", no/25);
	no=no%25;
	printf("%d moeda(s) de R$ 0.10\n", no/10);
	no=no%10;
	printf("%d moeda(s) de R$ 0.05\n", no/50);
	no=no%50;
	printf("%d moeda(s) de R$ 0.01\n", no);

return 0;
}
