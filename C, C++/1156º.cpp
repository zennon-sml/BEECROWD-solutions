#include <bits/stdc++.h>

using namespace std;
int main(){
	double n,x=2.00,s=1;
	for(n=3;n<40;n+=2){
		s+=n/x;
		x*=2;
		}
printf("%.2lf\n",s);
return 0;
}
