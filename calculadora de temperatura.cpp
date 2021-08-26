#include <stdio.h>
#include <stdlib.h>

float c,f,temp;
int opcao;

int main(){
	do{
		system("cls");
		printf("\n1 - Celsius para Fahrenhait \n2 - Fahrenhait para Celsius \n0 - para sair\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				printf("Digite a temperatura em Graus Celsius (C): ");
				scanf("%f",&c);
				f=((c*1.8)+32); //= f=((c*9/5)+32);
				printf("%.0f Fahrenhait (F): \n",f);
				system("pause");
			break;
				//system("pause");
				//system("cls");
			case 2:
				printf("Digite a temperatura em Fahrenhait (F): ");
				scanf("%f",&f);
				c=((f-32)*5/9);// =
				printf("%.0f Celsius (C): ",c);
				system("pause");
			break;
			case 0:
			break;
			default:
				printf("\nopcao invalida!");
		}
	}while(opcao!=0);
		
}
