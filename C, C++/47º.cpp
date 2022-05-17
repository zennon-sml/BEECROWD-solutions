	#include <bits/stdc++.h>

	using namespace std;
	int main(){
		int a,b,c,d,h=24,m=0;
		scanf("%d %d %d %d", &a,&b,&c,&d);
		if(a>c){ h=24-a+c; }
		if(a<c){ h=c-a; }
		if(b>d){ m=60-b+d; h--;}
		if(b<d){ m=d-b; }
		if(a==c && b!=d) {h =0;}
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h,m);
		 
	return 0;
	}
