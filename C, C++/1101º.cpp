#include <bits/stdc++.h>

using namespace std;
int main(){
	int m,n,z=0;
	while(1){
		scanf("%d %d",&n,&m);
		if(m<=0||n<=0){break;}
		else{z=0;
			if(m>n){
				while(m>=n){
					printf("%d ",n);
					z=z+n;
					n++;
					}
					printf("Sum=%d\n",z);
				}
			else if(n>m){swap(n, m); 
				while(m>=n){
					printf("%d ",n);
					z=z+n;
					n++;
					}
				printf("Sum=%d\n",z);
				
				}
			
			
			}
		
		}	
	
return 0;
}
