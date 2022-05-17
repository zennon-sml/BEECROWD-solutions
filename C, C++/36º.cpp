#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf", &a,&b,&c);
	if(a==0){printf("Impossivel calcular\n");}
	else if((pow(b, 2)-4*a*c)<0){printf("Impossivel calcular\n");}
	else{
	printf("R1 = %.5lf\n", (((b*-1)+(sqrt(b*b-4*a*c)))/(a*2.0)));
	
	printf("R2 = %.5lf\n", (((b*-1)-(sqrt(b*b-4*a*c)))/(a*2.0)));
	return 0;
	}


}
