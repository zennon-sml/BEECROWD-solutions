#include <bits/stdc++.h>

using namespace std;
int main(){
	double sf,tdv;
	char n[100];
	scanf("%s %lf %lf", &n,&sf,&tdv);
	printf("TOTAL = R$ %.2lf\n", sf+(tdv*15/100));
	return 0;
	
	
}
