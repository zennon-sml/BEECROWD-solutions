#include <bits/stdc++.h>

using namespace std;
int main(){
	double i=0.0,j=1.0,z=j;
	while(i<=2.0){
		printf("I=%.1lf J=%.1lf\n",i,z);
		if(j<4){j=j+1;z=j;}
		z=j+0.2;
		if(j==4){j=j-3;i=0.2;}
	}
	
return 0;
}
