#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num;//%D
	
	scanf("\n%d",&num);
	if((num%10) ==0){
		printf("\n%d e divisivel por 10!",num);
	}else if((num%5) ==0){
		printf("\n%d e divisivel por 5!",num);
	}else if((num%2) ==0){
		printf("\n%d e divisivel por 2!");
	}else{
		printf("\n%d nao e divisivel!",num);
	}
	
	return 0;
}
