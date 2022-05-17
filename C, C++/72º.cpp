#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,in=0,out=0;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&i);
		if(i>=10&&i<=20){ in ++; }
		else{ out ++; }
		n--;
		}
		printf("%d in\n",in);
		printf("%d out\n",out);



return 0;
}
