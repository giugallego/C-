#include<stdio.h>
#include<stdlib.h>

main(){
	
	int cont;//%d
	
	for(cont=1;cont<=200;cont++){
		if((cont%4)==0){
			printf("\n%d",cont);
		}
	}
	return 0;
}
