#include <bits/stdc++.h>

using namespace std;
int main(){
	int x,y,i=0;
	scanf("%d%d",&x,&y);
	if(x>y){ swap(x,y); }
	for(x=x;x<=y;x++){
		if(x%13!=0){ i=i+x; }
		}
	printf("%d\n",i);
return 0;
}
