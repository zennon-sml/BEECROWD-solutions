#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(b>a){ swap(a,b); }
	if(c>a){ swap(c,a); }
	if(c>b){ swap(b,c); }
	
	if(a>=b+c){ printf("NAO FORMA TRIANGULO\n"); }
	else{
	if((a*a)==(b*b)+(c*c)){ printf("TRIANGULO RETANGULO\n"); }
	if((a*a)>(b*b)+(c*c)){ printf("TRIANGULO OBTUSANGULO\n"); }
	if((a*a)<(b*b)+(c*c)){ printf("TRIANGULO ACUTANGULO\n"); }
	if(a==b&&b==c){ printf("TRIANGULO EQUILATERO\n"); }
	if(a==b&&b!=c){ printf("TRIANGULO ISOSCELES\n"); }
	if(b==c&&c!=a){ printf("TRIANGULO ISOSCELES\n"); }
	if(a==c&&a!=b){ printf("TRIANGULO ISOSCELES\n"); }
		
		}
return 0;
}
