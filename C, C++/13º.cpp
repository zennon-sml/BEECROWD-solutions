#include <bits/stdc++.h>

using namespace std;
int main(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	m = (a+b+abs(a-b))/2.0;
	ma = (a+c+abs(a-c))/2.0;
	printf(ma "eh o maior");
	return 0;
	
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d eh o maior\n", max(max(A, B), C));
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, maior;
    scanf("%d %d %d", &A, &B, &C);
    if(A > B && A > C)
        maior = A;
    else if (B > A && B > C)
        maior = B;
    else if (C > A && C > B)
        maior = C;
    printf("%d eh o maior\n", maior);
    return 0;
}
