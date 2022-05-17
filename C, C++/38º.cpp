#include <bits/stdc++.h>

using namespace std;
int main(){
	double n1,n2;
	scanf("%lf %lf", &n1,&n2);
	if(n1==1){ printf("Total: R$ %.2lf\n", 4*n2); }
	if(n1==2){ printf("Total: R$ %.2lf\n", 4.5*n2); }
	if(n1==3){ printf("Total: R$ %.2lf\n", 5*n2); }
	if(n1==4){ printf("Total: R$ %.2lf\n", 2*n2); }
	if(n1==5){ printf("Total: R$ %.2lf\n", 1.5*n2); }
return 0;
}
