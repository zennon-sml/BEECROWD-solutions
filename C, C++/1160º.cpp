#include <bits/stdc++.h>

using namespace std;
int main(){
	int n=0,t,i,pa,pb;
	double ca,cb;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d%lf%lf",&pa,&pb,&ca,&cb);
		for(n=0;pa<=pb;n++){
			pa+=(pa*ca)/100.0;
			pb+=(pb*cb)/100.0;
			 if(n>100){break;}
			}
			if(n<=100){printf("%d anos.\n",n);}
		else{ printf("Mais de 1 seculo.\n"); }	
	}
return 0;
}
