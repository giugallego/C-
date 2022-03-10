#include <stdio.h>
#include <stdlib.h>

main(){
	
	int x,numeros=0;//%d
	 
	for(x=1;x<=100;x++){
		numeros=numeros+x;
		printf("\nsoma %d: %d",x,numeros);
	}
	
	
	return 0;
}
