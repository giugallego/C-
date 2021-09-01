#include <stdio.h>
#include <stdlib.h>

char nome[3],resp1, resp2;
int idade, nasc;
float vlr1, vlr2, soma, sub, divisao, mult;
const int anoatual=2021;
// #define nome da variavel, está é outra forma de declarar uma constante
 


int main(){
	
	printf("Qual o seu nome? ");
	gets(nome);
	printf("%s \n",nome);
	printf("em que ano voce nasceu? ");
	scanf("%d",&nasc);
	idade=anoatual-nasc;
	printf("sua idade e: %d ?\n",idade);
	system("pause");
	system("cls");
	printf("digite um valor:");
	scanf("%f",&vlr1);
	printf("digite outro valor:");
	scanf("%f",&vlr2);
	soma=vlr1+vlr2;
	printf("o valor da soma e: %.2f\n",soma);
	sub=vlr1-vlr2;
	printf("o valor da subtracao e: %.2f\n",sub);
	
	
	
}
