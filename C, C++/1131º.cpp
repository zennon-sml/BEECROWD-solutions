#include <bits/stdc++.h>

using namespace std;
int main(){
	int g,i,vg=0,vi=0,e=0,x=0,z=0;
	while(scanf("%d%d",&i,&g)){
		 if(g==i){e++;}
		 else if(g>i){vg++;}
		 else{vi++;}
		 printf("Novo grenal (1-sim 2-nao)\n");
		 scanf("%d",&x);
		 z++;
		 if(x==2){ break; }
		}
	printf("%d grenais\n",z);
	printf("Inter:%d\n",vi);
	printf("Gremio:%d\n",vg);
	printf("Empates:%d\n",e);
	if(vi>vg){ printf("Inter venceu mais\n"); }
	else{ printf("Gremio venceu mais\n"); }
return 0;
}
