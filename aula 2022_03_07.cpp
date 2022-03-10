#include <stdio.h>
#include <stdlib.h>

float n1,n2, media;//%f

main(){
	
	printf("**********************\n");
	printf("*Calculo de Media!!!!*\n");
	printf("********************\n\n");
	//printf("digite um numero qualquer:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	media=(n1+n2)/2;
	if(media >=7){
		printf("\nmedia: %.2f - aluno aprovado", media);
	}else{
		printf("\nmedia: %.2f - aluno em recuperacao", media);	
	}
	
	
	
	
	
	return 0;
}
