#include <bits/stdc++.h>

using namespace std;
int main(){
	double n;
	scanf("%lf", &n);
	if(n<=2000){ printf("Isento\n"); }
	else if(n>2000.01&&n<=3000){ printf("R$ %.2lf\n", ((n-2000)*8)/100.00); }
	else if(n>3000.01&&n<=4500){ printf("R$ %.2lf\n", (((n-3000)*18)/100.00)+80); }
	else if(n>4500.01){ printf("R$ %.2lf\n", (((n-4500)*28)/100.00)+350); }



return 0;
}
