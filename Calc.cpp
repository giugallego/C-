#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;

int main(){
	do{//1� parte da opera��o do while, l� o codigo antes para gerar parametro de compara��o, ver linha30.
	
		system("cls");
		
		printf("CALCULADORA\n\n");
		printf("digite o 1 valor:");
		scanf("%f",&valor1);
		printf("digite o 2 valor:");
		scanf("%f",&valor2);
		
		 if(valor1!=0 || valor2!=0){//condi��o OU(||), dependendo da situa��o devemos usar a condi��o E (&&) ver tabela verdade
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
	}while(valor1!=0 || valor2!=0);//2� parte da opera��o do while, olha a 1� parte como paramentro de compara��o.
return 0;        
}
