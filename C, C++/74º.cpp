#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,x=0,z;
	scanf("%d", &n);
	while(x<n){
		scanf("%d", &z);
		x=x+1;
		
if(z==0){ printf("NULL\n"); }
else if((z%2)==0&&z>0){ printf("EVEN POSITIVE\n"); }
else if((z%2)==0&&z<0){ printf("EVEN NEGATIVE\n"); }
else if((z%2)!=0&&z>0){ printf("ODD POSITIVE\n"); }
else if((z%2)!=0&&z<0){ printf("ODD NEGATIVE\n"); }

}

return 0;
}
