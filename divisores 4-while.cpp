#include<stdio.h>
#include<stdlib.h>

//	int num=1,cont,aux;
	
//	while(cont<=200){
//		aux=num%4;
//		if(aux==0){
//			printf("\n%d",aux);
//		}
//		cont++;
//	}
//}

main(){
	
	int cont;
	
	while(cont<=200){
		if((cont%4)==0){
			printf("\n%d",cont);
		}
		cont++;
	}
}
