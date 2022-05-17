	#include <bits/stdc++.h>

using namespace std;
int main(){
	int i=0,m=0;
	double n,z=0;
	while(i<6){ 
	scanf("%lf",&n);
	if(n>0){ m++;z+=n; }
	i++;	
	}
	printf("%d valores positivos\n", m);
	printf("%.1lf\n", z/m);
return 0;
}
