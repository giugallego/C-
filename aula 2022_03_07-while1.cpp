#include <stdio.h>
#include <stdlib.h>

main(){
	
	int cont=1000;//%d
	while(cont<=8000){
		printf("\nrepeticao %d",cont);
		if(cont==5000){
			printf("\n parada do laco");
			break;
		}
		cont=cont+1;//é igual cont++
	}
	return 0;
}
