#include <stdio.h>

int main(void) {
	int Qatual, Qmax, Qmin, Qmed;
	
	printf("Quantidade atual: ");
	scanf("%d", &Qatual);
	
	printf("Quantidade maxima: ");
	scanf("%d", &Qmax);
	
	printf("Quantidade minima: ");
	scanf("%d", &Qmin);
	
	Qmed = (Qmax + Qmin) / 2;
	
	if (Qmed >= Qatual)
	  printf("Nao efetuar compra. ");
	else
	  printf("Efetuar compra. ");
	  
	return 0;    	
}
