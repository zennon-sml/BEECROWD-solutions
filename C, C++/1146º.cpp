#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i;
	while(scanf("%d",&n)&&n!=0){
		for(i=1;i<n+1;i++){
			printf("%d",i);
			if(i<n){ printf(" "); }
			else{ printf("\n"); }
			}
}
return 0;
}
