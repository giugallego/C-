#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;

int main(){
	printf("CALCULADORA\n\n");
	printf("digite o 1 valor:");
	scanf("%f",&valor1);
	printf("digite o 2 valor:");
	scanf("%f",&valor2);
	printf("qual operação deseja fazer?\n 1-Soma\n 2-Subtracao\n");
	scanf("%d",&operacao);
	if(operacao==1){// estrutura de if(se) basica
		resultado=valor1+valor2;
	}else{
		resultado=valor1-valor2;
	}
	printf("%f",resultado);
	
return 0;
}
