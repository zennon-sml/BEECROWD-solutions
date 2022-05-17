#include <bits/stdc++.h>

using namespace std;
int main(){
	int i=1,j=7;
		while(j>4){
			printf("I=%d J=%d\n",i,j);
			j=j-1;
			if(j==4){j=7;i=i+2;}
			if(i==11){ break; }
			}
return 0;
}
