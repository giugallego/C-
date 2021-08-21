#include <stdio.h>
int main() {
	float vlr1, vlr2, vlr3, vlr4, media;
	scanf ("%f %f %f %f" ,&vlr1, &vlr2, &vlr3, &vlr4);
	media = (vlr1 * vlr2 - vlr3 * vlr4);
	printf ("DIFERENCA = %.0f\n",media);	
return (0);		
}
