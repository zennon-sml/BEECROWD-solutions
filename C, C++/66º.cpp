#include <bits/stdc++.h>

using namespace std;
int main(){
	int x=0,y=0,z=0,h=0,s=0;
	while(x<5){
	scanf("%d",&h);
	x++;
	if(h>0){ y++; }
	if(h<0){ s++; }
	if(h%2==0){ z++; }		
	}
	printf("%d valor(es) par(es)\n",z);
	printf("%d valor(es) impar(es)\n",5-z);
	printf("%d valor(es) positivo(s)\n",y);
	printf("%d valor(es) negativo(s)\n",s);

return 0;
}
