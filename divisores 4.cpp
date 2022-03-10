#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num=1,cont,aux;//%d
	
	for(cont=1;cont<=200;cont++){
		
		aux=num%4;
		
		if(aux==0){
			printf("\n%d",num);
		}
		num++;
	}
	
	return 0;
}
