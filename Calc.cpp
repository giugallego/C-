#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;

int main(){
	do{//1º parte da operação do while, lê o codigo antes para gerar parametro de comparação, ver linha30.
	
		system("cls");
		
		printf("CALCULADORA\n\n");
		printf("digite o 1 valor:");
		scanf("%f",&valor1);
		printf("digite o 2 valor:");
		scanf("%f",&valor2);
		
		 if(valor1!=0 || valor2!=0){//condição OU(||), dependendo da situação devemos usar a condição E (&&) ver tabela verdade
			printf("digite a operacao 1- soma 2- subtracao 3- divisao 4-multiplicacao: ");
		    scanf("%d",&operacao);
		    if(operacao==1){
		        resultado=valor1+valor2;
		    }else if(operacao==2){
		        resultado=valor1-valor2;
		    }else if(operacao==3){
		        resultado=valor1/valor2;
		    }else if(operacao==4){
		        resultado=valor1*valor2;
		    }
		    printf("o resultado da operacao e: %.2f\n",resultado);
		    
		    system("pause");
		}
	}while(valor1!=0 || valor2!=0);//2º parte da operação do while, olha a 1º parte como paramentro de comparação.
return 0;        
}
