#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;
//const int soma=1, subtra��o=2, divisao=3, multiplicacao=4

int main(){
	do{//1� parte da opera��o do while, l� o codigo antes para gerar parametro de compara��o, ver linha30.
	
		system("cls");//comando para limpar a tela
		
		printf("CALCULADORA\n\n");
		printf("digite o 1 valor:");
		scanf("%f",&valor1);
		printf("digite o 2 valor:");
		scanf("%f",&valor2);
		
		 if(valor1!=0 || valor2!=0){//condi��o OU(||), dependendo da situa��o devemos usar a condi��o E (&&) ver tabela verdade
			printf("digite a operacao 1- soma 2- subtracao 3- divisao 4-multiplicacao: ");//no local dos numeros colocar %d e apos as aspas do final colocar ,soma ,subtracao, divisao ,multiplicacao; 
		    scanf("%d",&operacao);
		    switch(operacao){//usado para eliminar a inser��o de varios IF
		    	case 1://soma:
		    		resultado=valor1+valor2;
		    	break;
		    	case 2://subtracao:
		    		resultado=valor1-valor2;
		    	break;
		    	case 3://divisao:
		    		resultado=valor1/valor2;
		    	break;
		    	case 4://multiplicacao:
		    		resultado=valor1*valor2;
		    	break;
		    }
		    printf("o resultado da operacao e: %.2f\n", resultado);
		    system("pause");//comando para pausar o programa antes de passar de tela
		}
	}while(valor1!=0 || valor2!=0);//2� parte da opera��o do while, olha a 1� parte como paramentro de compara��o.
return 0;        
}
