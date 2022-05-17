#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,s,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);s=0;
		for(y=2;y<x;y++){
			if(x%y==0){ s++; }
			}
			if(!s){ printf("%d eh primo\n",x); }
			else{ printf("%d nao eh primo\n",x); }
		}

return 0;
}
