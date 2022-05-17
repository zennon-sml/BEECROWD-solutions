#include <bits/stdc++.h>

using namespace std;
int main(){
	int s,n,i=0,x=1,y=0;
	scanf("%d",&n);
	if(n==1){printf("%d\n",0);i+=1;}
	if(n==2){printf("%d ",0); printf("%d\n",1);i+=2;}
	if(n>=3){printf("%d ",0); printf("%d ",1);i+=2;}
	for(i=i;i<n;i++){
		s=x+y;
		printf("%d",s);
		if(i<n-1){ printf(" "); }
		else if(i==n-1){ printf("\n"); }
		y=x;
		x=s;
		}
return 0;
}
