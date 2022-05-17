#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,s=0;
	while(scanf("%d",&n)&&n!=0){s=0;
		if(n%2==0){
			for(i=0;i<5;i++){
				s+=n;
				n+=2;
				}
			}
		if(n%2!=0){ n++;
			for(i=0;i<5;i++){
				s+=n;
				n+=2;
				}
			}
		printf("%d\n",s);
	}
return 0;
}
