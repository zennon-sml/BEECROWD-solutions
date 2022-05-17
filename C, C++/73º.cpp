#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,x=0;
	scanf("%d",&n);
	if(n%2==0){
	while(x<n){
		x=x+2;
		printf("%d^2 = %d\n", x,x*x);
		}
	}
	else{
		while(x<(n-1)){
			x=x+2;
			printf("%d^2 = %d\n", x,x*x);
			}
		
		}
	
	
	
	
	

return 0;
}
