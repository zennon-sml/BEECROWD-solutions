#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i,z,co=0,ra=0,sa=0,cob=0;
	char m[2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&z,m);
		cob=cob+z;
		if(strcmp(m,"C")==0){ co=co+z; }
		if(strcmp(m,"R")==0){ ra=ra+z; }
		if(strcmp(m,"S")==0){ sa=sa+z; }
		
		}

printf("Total: %d cobaias\n",cob);
printf("Total de coelhos: %d\n",co);
printf("Total de ratos: %d\n",ra);
printf("Total de sapos: %d\n",sa);
printf("Percentual de coelhos: %.2lf %\n",(100.0*co)/cob);
printf("Percentual de ratos: %.2lf %\n",(100.0*ra)/cob);
printf("Percentual de sapos: %.2lf %\n",(100.0*sa)/cob);
return 0;
}
