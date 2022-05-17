#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,z,s=0,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){s=0;
		scanf("%d",&z);
		for(x=1;x<z;x++){
			if(z%x==0){ s+=x; }
			}
		if(s==z){ printf("%d eh perfeito\n",z); }
		else{ printf("%d nao eh perfeito\n",z); }
		
		}

return 0;
}
