#include <bits/stdc++.h>

using namespace std;
int main(){
	int i,z=0,x=0;
	for(i=0;i<100;i++){
		int n;
		scanf("%d",&n);
		if(n>z){ z=n; x=i+1; }
		}
		
printf("%d\n",z);
printf("%d\n",x);
return 0;
}
