#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	double x,y;
	scanf("%d",&n);
	for(n=n;n>0;n--){
		scanf("%lf%lf",&x,&y);
		if(y==0){ printf("divisao impossivel\n"); }
		else{ printf("%.1lf\n",x/y); }
	}
return 0;
}
