#include <bits/stdc++.h>

using namespace std;
int main(){
	int n=1,x;
	scanf("%d",&x);
	if(x%2==0){
		while(n<x){
			printf("%d\n",n);
			n=n+2;
			}
		}
		else{
			while(n<=x){
				printf("%d\n",n);
				n=n+2;
				
				}
			}




return 0;
}
