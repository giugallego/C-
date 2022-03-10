#include <stdio.h>
#include <stdlib.h>

main(){
	int n1,result;//%d
	
	
	scanf("%d", &n1);
	result=n1%2;
	if(result==0){
		printf("\n%d numero e par");
	}else{
		printf("\n%d numero e impar");
	}
	if(n1>=0){
		printf("\n numero positivo");
	}else{
		printf("\n numero negativo");
	}
	
	
	return 0;
}
