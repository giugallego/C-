#include<stdio.h>
#include<stdlib.h>

main(){
	
	//float nota1,nota2,nota3, media;//%f
	double nota1,nota2,nota3,media;//%lf
	scanf("%lf",&nota1);
	scanf("%lf",&nota2);
	scanf("%lf",&nota3);
	media=(nota1+nota2+nota3)/3;
	if(media==10){
		printf("\nMedia %.2lf - **APROVADO COM LOUVOR**", media);
	}else if(media<7){
		printf("\nMedia %.2lf - **REPROVADO**", media);
	}else if(media>=7){
		printf("\nMedia %.2lf - **APROVADO**", media);
	}
	
	return 0;
}
