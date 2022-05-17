#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(i==1){n*=2;}
		if(i>1){n*=2;}
		printf("N[%d] = %d\n",i,n);
		}

return 0;
}
