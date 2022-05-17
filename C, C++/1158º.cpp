#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,x,y,s,z;
	scanf("%d",&n);
	for(i=0;i<n;i++){s=0;z=0;
		scanf("%d%d",&x,&y);
		if(x%2!=0){
			for(z=0;z<y;z++){
			s+=x;
			x+=2;
			}
		}
		if(x%2==0){x++;
			for(z=0;z<y;z++){
				s+=x;
				x+=2;
				}
			}
			printf("%d\n",s);
		}
return 0;
}
