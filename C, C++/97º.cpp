#include <bits/stdc++.h>

using namespace std;
int main(){
	int i=1,j=7,n=7;
	while(j<=n){
		printf("I=%d J=%d\n",i,j);
		j=j-1;
		if(j==n-3){ j=j+5;n=n+2;i=i+2; }
		if(n==17){ break; }
		
		}
return 0;
}
