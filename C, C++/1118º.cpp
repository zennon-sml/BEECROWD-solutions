#include <bits/stdc++.h>

using namespace std;
int main(){
	double n=0,x=0,i=0,y=0;
	while(scanf("%lf",&n)){
		if(y==1){ i=0; x=0; y=0; }
		if(n>=0&&n<=10){ x=x+n; i++; }
		else{ printf("nota invalida\n"); }
		if(i==2){ printf("media = %.2lf\n",x/2); }
		if(i==2){
		 printf("novo calculo (1-sim 2-nao)\n");
			while(scanf("%lf",&y)){
				if(y<1||y>2){ printf("novo calculo (1-sim 2-nao)\n"); } 
				if(y==2){ break; }
				if(y==1){ break; }
				}
			}
			if(y==2){ break; }
		}
		
return 0;
}
