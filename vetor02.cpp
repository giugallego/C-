#include <stdio.h>
#include <stdlib.h>
float valor[100];

int main(){
	printf("Digite quantos numeros vc deseja inserir: ");
	int qtde,i;
	scanf("%d",&qtde);
	for(i=0;i<qtde;i++){
		printf("digite o valor %d:",i+1);
	    scanf("%f",&valor[i]);
	}
	for(i=0;i<qtde;i++){
		printf("[valor na posicao %d : %.2f] ",i,valor[i]);	
	}
}
