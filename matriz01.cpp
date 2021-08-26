#include <stdio.h>
#include <stdlib.h>
float nota[4][2],media[4],soma;

int main(){
	int l,c;
	for(l=0;l<4;l++){
		soma=0;
		for(c=0;c<2;c++){
			printf("Digite a nota %d do aluno %d: ",c+1,l+1);
			scanf("%f",&nota[c][l]);
			soma+=nota[c][l];
		}	
		media[l]=soma/2;	
	}
	for(l=0;l<4;l++){
	printf("\nMedia: %f",media[c]/2);
	if((media[l]/2)>=7){
		printf("\nParabéns aluno APROVADO!!!!");
	}else{
		printf("\nAluno reprovado tente no proximo ano =/");
	}
	
	
	}
	
	
	
}
