#include <stdlib.h>
#include <stdio.h>

int l,c;
float soma, media[2], matriz[2][2];
int main(){
	for(l=0;l<2;l++){
		soma=0;
		for(c=0;c<2;c++){
			printf("insira a nota %d do aluno %d :",c+1,l+1);
			scanf("%f",&matriz[l][c]);
			soma+=matriz[l][c];
		}
		media[l]=soma/2;
	}
	for(l=0;l<2;l++){
		printf("media do aluno %d e: %f\n",l+1,media[l]);
	}
	return 0;
}



