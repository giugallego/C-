#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	
	char nome[20];//%s
	
	printf("\n**********\n");
	printf("\n*CONTADOR*\n");
	printf("\n**********\n");
	printf("\nDigite seu nome:\n");
	scanf("%s",&nome);
	printf("TAMANHO: %d",strlen(nome));
	
	
	return 0;
}
