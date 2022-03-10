#include <stdio.h>

main(){
	
	int cont;
	for(cont=1000;cont<=8000;cont++){
		printf("\nrepeticao %d", cont);
			if(cont==5000){
			printf("\n parada do laco");
			break;
		}
	}
	
	
	return 0;
}
