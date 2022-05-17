#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a=0,g=0,d=0;
	while(scanf("%d",&n)){
		if(n==4){ break; }
		if(n==1){ a++; }
		if(n==2){ g++; }
		if(n==3){ d++; }
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",a);
	printf("Gasolina: %d\n",g);
	printf("Diesel: %d\n",d);
return 0;
} 
