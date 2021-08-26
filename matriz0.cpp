#include <stdio.h>
#include <stdlib.h>

char nome[3][100];

	int main(){
	int i;
	for (i=0;i<3;i++){
		printf("Digite um nome: ");
		gets(nome[i]);
	}
	for (i=0;i<3;i++){
	printf("%s\n",nome[i]);
	}
	
}
