#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		double x,y,z;
		scanf("%lf %lf %lf", &x,&y,&z);
		printf("%.1lf\n",(x*2+y*3+z*5)/10);
	}

return 0;
}
