#include <stdio.h>
#include <stdlib.h>

float nota1[4],nota2[4],media[4];//vetor nota tem 4 posições

int main(){
	int i;
		for (i=0;i<4;i++){
		printf("digite a nota 1 do aluno %d ",i+1);
		scanf("%f",&nota1[i]);//melhor maneira de manipular o vetor, independente de tipo de dado a ser usado, é usar laço de repetição 
		printf("digite a nota 2 do aluno %d ",i+1);
		scanf("%f",&nota2[i]);		
		//media=nota[i]; nao funciona, pois fica com o ultimo valor digitado	
		media[i]=nota1[i]+nota2[i];
		
	}
	//media=media/4;
	//printf("a soma das notas e: %.2f ",nota[i]);
	
	//system("pause");
	for(i=0;i<4;i++){
		printf("\nMedia do aluno %d :%.2f]",i+1,media[i]/2);
		if (media[i]/2>=7){
		printf("\nAluno Aprovado, PARABENS!!!");
	}else{
	
		printf("\nTente novamente no ano que vem!");
		}
	}
	printf("\nAmedia : %.2f",media[i]);
	
	
	
}
