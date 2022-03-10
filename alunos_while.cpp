#include <stdio.h>
#include <stdlib.h>


main(){
	float n1,n2,media;//%f
	int cont=1;//%d
	
	printf("**********************\n");
	printf("*Calculo de Media!!!!*\n");
	printf("**********************\n\n");
	//printf("digite um numero qualquer:\n");
	
	while(cont<=3){
		scanf("%f",&n1);
		scanf("%f",&n2);
		media=(n1+n2)/2;
		
		if(media >=7){
			printf("\nmedia: %.2f - aluno aprovado\n", media);
		}else{
			printf("\nmedia: %.2f - aluno em recuperacao\n", media);	
		}
	cont++;
	}
	return 0;
}
