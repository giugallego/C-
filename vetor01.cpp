#include <stdio.h>
#include <stdlib.h>

char nome[100], sobrenome[100]; 

int main(){
	printf("Qual seu nome?");
	gets(nome);
	printf("e o seu sobrenome?");
	gets(sobrenome);
	printf("%s \n %s",nome,sobrenome);
	
}
