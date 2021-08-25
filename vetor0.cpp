#include <stdio.h>
#include <stdlib.h>

float nota[4],media;//vetor nota tem 4 posições

int main(){
	int i;
		for (i=0;i<4;i++){
		printf("digite uma nota: ");
		scanf("%f",&nota[i]);//melhor maneira de manipular o vetor, independente de tipo de dado a ser usado, é usar laço de repetição 
		//media=nota[i];	
		media=media+nota[i];//media+=nota[i] media recebe media mais nota
		
	}
	media=media/4;
	printf("a soma das notas e: %.2f ",nota[i]);
	system("pause");
	for(i=0;i<4;i++){
		printf("[nota %d :%.2f]",i+1,nota[i]);
	}
	printf("\nAmedia : %.2f",media);
	if (media>=7){
		printf("\nAluno Aprovado, PARABENS!!!");
	}else{
	
		printf("\nTente novamente no ano que vem!");
		}
	
	
}
