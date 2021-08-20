#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;

int main(){
	printf("digite um valor:\n");
	scanf("%f",&valor1);
	printf("digite outro valor:\n");
	scanf("%f",&valor2);
	resultado=valor1+valor2;
	operacao=valor2;
	if(resultado>50){
		printf("a metade deste valor e: %.2f\n",resultado/2);	
	}
	else{
		printf("a soma dos valores e: %.2f\n",resultado);	
	}
		else if(operacaoo>20){
			printf("é maior que %f", operacao);	
		}
		else if(operacao=20){
			printf("é igual a %f", operacao);
		}
		else if(operacao<20){
			printf("é menor que %f", operacao);
		}
	}
	printf("o valor digitado foi: %.2f\n",valor1);
	system("pause");
	
		
	
	
	
	
	
	
	
	
	
	
return 0;        
}
