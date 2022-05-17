#include <bits/stdc++.h>

using namespace std;
int main(){
	double n,x=0,i=0;
	while(scanf("%lf",&n)){
		if(n>=0&&n<=10){ x=x+n; i++; }
		if(i==2){ break; }
		if(n<0||n>10){ printf("nota invalida\n"); }
	}
	printf("media = %.2lf\n",x/2);
return 0;
}
