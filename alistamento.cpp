#include<stdio.h>
#include<stdlib.h>

main(){
	
	char nome[20],sexo; //%s para string %c para char(1 caracter)
	int idade;//%d
	
	printf("\nDigite seu nome: ");
	scanf("%s",&nome);
	fflush(stdin);//limpar buf
	printf("\nDigite seu sexo: ");
	scanf("%c",&sexo);
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	if(sexo=='m' && idade>=18){
		printf("\n%s - ALISTAMENTO",nome);
	}else{
		printf("\n Nao apto");
	}
	
		
	return 0;
}
