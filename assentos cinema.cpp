#include <stdio.h>
#include <stdlib.h>

main(){
	int setor,cadeira;//%d
	
	
	for(setor=1;setor<=4;setor++){
		for(cadeira=1;cadeira<=200;cadeira++){
		printf("\nsetor: %d - cadeira: %d", setor,cadeira);
		}
		system("pause");
	}
		
	return 0;
}
