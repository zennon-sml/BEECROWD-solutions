#include <bits/stdc++.h>

using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	char n[10];
	scanf("%s %d %d %s %d %s %d %s %d %d %s %d %s %d", n,&a,&b,n,&c,n,&d,n,&e,&f,n,&g,n,&h);
	struct tm t1,t2;
	t1.tm_mday=a;
	t1.tm_mon=3;
	t1.tm_year=118;
	t1.tm_hour=b;
	t1.tm_min=c;
	t1.tm_sec=d;
	
	t2.tm_mday=e;
	t2.tm_mon=3;
	t2.tm_year=118;
	t2.tm_hour=f;
	t2.tm_min=g;
	t2.tm_sec=h;

	int z=(int)difftime(mktime(&t2),mktime(&t1));
	int a1=z/86400,a2,a3, a4;
	a2 = fmod(z, 86400)/3600;
	a3 = fmod(fmod(z,86400), 3600)/60;
	a4 = fmod(fmod(fmod(z,86400), 3600), 60);
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", a1,a2,a3,a4);
	

return 0;
}
