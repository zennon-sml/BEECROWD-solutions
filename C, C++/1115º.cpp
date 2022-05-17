#include <bits/stdc++.h>

using namespace std;
int main(){
	int z,n;
	while(scanf("%d%d",&z,&n)){if(z==0||n==0){break;}
		if(z>0&&n>0){ printf("primeiro\n"); }
		else if(z>0&&n<0){ printf("quarto\n"); }
		else if(z<0&&n>0){ printf("segundo\n"); }
		else if(z<0&&n<0){ printf("terceiro\n"); }
	
	}
return 0;
}
