#include <stdio.h>
#include <stdlib.h>

main(){
	int i=1,j;//%d
	for(j=60;j>=0;j-=5){
		printf("I=%d - J=%d\n" ,i,j);
		i+=3;
	}
	return 0;
}
