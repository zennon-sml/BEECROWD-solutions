#include <bits/stdc++.h>

using namespace std;
int main(){
	int d;
	scanf("%d", &d);
	int ano=d/365;
	int mes=(d%365)/30;
	int dia=((d%365)%30)/1;
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	return 0;

return 0;
}
