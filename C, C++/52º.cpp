#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	char m[20];
	scanf("%d", &n);
	if(n==1){ strncpy(m, "January",20); }
	if(n==2){ strncpy(m, "February",20); }
	if(n==3){ strncpy(m, "March",20); }
	if(n==4){ strncpy(m, "April",20); }
	if(n==5){ strncpy(m, "May",20); }
	if(n==6){ strncpy(m, "June",20); }
	if(n==7){ strncpy(m, "July",20); }
	if(n==8){ strncpy(m, "August",20); }
	if(n==9){ strncpy(m, "September",20); }
	if(n==10){ strncpy(m, "October",20); }
	if(n==11){ strncpy(m, "November",20); }
	if(n==12){ strncpy(m, "December",20); }
	
	printf("%s\n",m);
return 0;
}
