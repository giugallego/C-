#include <stdlib.h>
#include <stdio.h>
float soma,media,nota[2];
int operacao
menu(){
	do{//1º parte da operação do while, lê o codigo antes para gerar parametro de comparação, ver linha30.
	
		system("cls");//comando para limpar a tela
		
		printf("printf"PROGRAMA PARA GERACAO DE MEDIA\n"\n\n");
				
		 if(nota[i]!=0 || nota[i]!=0){//condição OU(||), dependendo da situação devemos usar a condição E (&&) ver tabela verdade
			printf("digite a operacao 1- soma 2- subtracao 3- divisao 4-multiplicacao: ");//no local dos numeros colocar %d e apos as aspas do final colocar ,soma ,subtracao, divisao ,multiplicacao; 
		    scanf("%d",&operacao);
		    switch(operacao){//usado para eliminar a inserção de varios IF
		    	case 1://soma:
		    		resultado=nota[i]+nota[i];
		    	break;
		    	case 2://subtracao:
		    		resultado=nota[i]-nota[i];
		    	break;
		    	case 3://divisao:
		    		resultado=nota[i]/nota[i];
		    	break;
		    	case 4://multiplicacao:
		    		resultado=nota[i]*nota[i];
		    	break;
		    }
		    printf("o resultado da operacao e: %.2f\n", resultado);
		    system("pause");
	
	
	
}
pegar_nota(){
	int i;
	for(i=0;i<2;i++){
		printf("Digite a nota %d: ",i+1);
		scanf("%f",&nota[i]);
		soma+=nota[i];
	}
}
calcular_media(){
	media=soma/2;
}
apresenta_media(){
	int i=0;
	while(i<2){
	
		printf("Nota %d : %.2f\n",i+1,nota[i]);
		i++;
	}
	printf("\na media e: %.2f",media);
}


int main(){
	menu();
	pegar_nota();
	calcular_media();
	apresenta_media();
	return 0;
}
