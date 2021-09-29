#include <stdlib.h>
#include <stdio.h>

float soma, media[2], matriz[2][2];
char nome[2][50];
int l,c;
int main(){
	for(l=0;l<2;l++){
		printf("digite o nome do aluno %d :",l+1);
		fflush(stdin);
		gets(nome[l]);
		soma=0;
			for(c=0;c<2;c++){
				printf("insira a nota %d do aluno %d :",c+1,l+1);
				scanf("%f",&matriz[l][c]);
				soma+=matriz[l][c];
			}	
		media[l]=soma/2;
	}
 
	for(l=0;l<2;l++){
		printf("A media do aluno %s e: %.2f\n",nome[l],media[l]);
		
	}
	return 0;
}
