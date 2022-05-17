#include <bits/stdc++.h>

using namespace std;
int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
	double media=(a*2+b*3+c*4+d*1)/10;
	if(media>=5.0&&media<=6.9){
		double nota;
		scanf("%lf", &nota);
		printf("Media: %.1lf\n", media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n", nota);
		double mf=(nota+media)/2;
			if(mf>=5){
				printf("Aluno aprovado.\n");
			}
			
			if(mf<4.9){
				printf("Aluno reprovado.\n");
			}
			
			printf("Media final: %.1lf\n", mf);
			
	}
	else if(media>=7){
		printf("Media: %.1lf\n", media);
		printf("Aluno aprovado.\n");
	}
	else{
		printf("Media: %.1lf\n", media);
		printf("Aluno reprovado.\n");
	}
	return 0;

}
