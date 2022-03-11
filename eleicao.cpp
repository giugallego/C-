#include <stdio.h>
#include <stdlib.h>

main(){
	
	int candidato1=0,candidato2=0,candidato3=0,voto=0;//%d
	printf("**************\n");
	printf("***ELEICOES***");
	printf("\n**************\n");

system("pause");	
	while(voto!=4){
			printf("\n 1 - para votar no candidato 1\n 2 - para votar no candidato 2\n 3 - para votar no candidato 3\n 4 - para encerrar \n");
			scanf("%d",&voto);
			switch(voto){
			case 1:
				candidato1 ++;
				printf("\n voto computado \n");
			break;
			
			case 2:
				candidato2 ++;
				printf("\n voto computado \n");
			break;
			
			case 3:
				candidato3 ++;
				printf("\n voto computado \n");
			break;
			default:
				printf("voto invalido");
		}
	//system("pause");
	system("cls");
	}
	printf("\n CANDIDATO 1 = %d \n CANDIDATO 2 = %d \n CANDIDATO 3 = %d ",candidato1,candidato2,candidato3);
	
	if(candidato1>candidato2 && candidato1>candidato3){
		printf("\nCandidato 1 eleito");
	}else if(candidato2>candidato1 && candidato2>candidato3){
		printf("\nCandidato 2 eleito");
	}else if(candidato3>candidato1 && candidato3>candidato2){
		printf("\nCandidato 3 eleito");
	}else{
		printf("\nEmpate");
	}

	
	
	
	
	return 0;
}
