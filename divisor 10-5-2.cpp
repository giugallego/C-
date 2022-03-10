#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num;//%D
	
	scanf("\n%d",&num);
	if((num%10) ==0){
		printf("\n%d e divisivel por 10!",num);
	}
	if((num%5) ==0){
		printf("\n%d e divisivel por 5!",num);
	}
	if((num%2) ==0){
		printf("\n%d e divisivel por 2!",num);
	}
	if((num%10)!=0 && (num%5)!=0 && (num%2)!=0){
		printf("\n%d nao e divisivel por 10 - 5 - 2!",num);
	}
	
	return 0;
}
