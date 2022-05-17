#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf", &a,&b,&c);
	if((abs(b-c)<a&&a<b+c)&&(abs(a-b)<b&&b<a+c)&&(abs(a-b)<c&&c<a+b)){ printf("Perimetro = %.1lf\n", a+b+c);}
	else{ printf("Area = %.1lf\n", ((a+b)/2)*c); }
	
return 0;
}
