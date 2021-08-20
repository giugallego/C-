#include <stdio.h>
#include <stdlib.h>

int operacao;
float valor1, valor2, resultado;
//const int soma=1, subtração=2, divisao=3, multiplicacao=4

int main(){
	do{//1º parte da operação do while, lê o codigo antes para gerar parametro de comparação, ver linha30.
	
		system("cls");//comando para limpar a tela
		
		printf("CALCULADORA\n\n");
		printf("digite o 1 valor:");
		scanf("%f",&valor1);
		printf("digite o 2 valor:");
		scanf("%f",&valor2);
		
		 if(valor1!=0 || valor2!=0){//condição OU(||), dependendo da situação devemos usar a condição E (&&) ver tabela verdade
			printf("digite a operacao 1- soma 2- subtracao 3- divisao 4-multiplicacao: ");//no local dos numeros colocar %d e apos as aspas do final colocar ,soma ,subtracao, divisao ,multiplicacao; 
		    scanf("%d",&operacao);
		    switch(operacao){//usado para eliminar a inserção de varios IF
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
	}while(valor1!=0 || valor2!=0);//2º parte da operação do while, olha a 1º parte como paramentro de comparação.
return 0;        
}
