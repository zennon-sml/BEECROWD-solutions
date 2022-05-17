#include <iostream>

int main() {
    int n=6,x;
    scanf("%d", &x);
    if(x%2==0){
        x=x+1;
        printf("%d\n", x);
        while(n>1){
            printf("%d\n", x+2);
            n=n-1;
            x=x+2;
        }
    }

	else{ 
		printf("%d\n",x);
		while(n>1){
			printf("%d\n",x+2);
			n=n-1;
			x=x+2;
			
			}
		
	}


    return 0;
}
