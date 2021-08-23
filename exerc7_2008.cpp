#include <stdio.h>
int main() {
	double salf, total, comissao;
	char nome;
	scanf ("%s %lf %lf" ,&nome, &salf , &comissao);
	total = ((comissao * 0.15) + salf);
	printf ("TOTAL = R$ %.2f\n",total);	
return (0);		
}
