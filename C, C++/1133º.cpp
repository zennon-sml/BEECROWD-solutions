#include <bits/stdc++.h>

using namespace std;
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(y<x){ swap(x,y); }
	for(x=x+1;x<y;x++){ 
		if(x%5==2||x%5==3){ printf("%d\n",x);}	
	}
return 0;
}
