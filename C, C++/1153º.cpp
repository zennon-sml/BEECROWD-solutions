#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,x=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		x*=i;
		}
printf("%d\n",x);
return 0;
}
