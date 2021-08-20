#include <stdio.h>
#include <stdlib.h>
float hora,saque;
int main()
{
    printf("qual o horario atual\n");
    scanf("%f",&hora);
    if(hora<=22 && hora>=6)
	{
		printf("qual o valor do saque\n");
		scanf("%f",&saque);
		if(saque<=5000)
		{
			printf("saque efetuado com suscesso\n");
		}
		else
		{
			printf("operacao nao realizada\n");
		}
	}
	else
	{
		printf("qual o valor do saque\n");
		scanf("%f",&saque);
		if(saque<=400)
		{
			printf("saque efetuado com suscesso\n");
		}
		else
		{
			printf("operacao nao realizada\n");
		}
	}
	system("pause");
    return 0;        
}
