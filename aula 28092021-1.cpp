#include <stdlib.h>
#include <stdio.h>

char nome[2][50];
int i,j;
int main(){
	for(i=0;i<2;i++){
		printf("digite o nome do aluno %d :",i);
		gets(nome[i]);
	}
	for(j=0;j<2;j++){
		printf("\n[%s]",nome[j]);
	}
	
	return 0;
}
