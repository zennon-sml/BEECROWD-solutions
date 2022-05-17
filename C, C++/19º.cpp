#include <bits/stdc++.h>

using namespace std;
int main(){
	int a;
	scanf("%d", &a);
	int a1=a/(60*60);
	int a2=(a%(60*60))/60;
	int a3=((a%(60*60))%60);
	printf("%d:%d:%d\n", a1,a2,a3);
	return 0;
	
}
