#include <stdio.h>

int main (void) {
	
	int valor;
	printf("Digite um valor qualquer:");
	scanf("%d", &valor);
	
	if (valor >= 0)
	  printf("Valor positivo! \n");
	else
	  printf("Valor negativo! \n");
	  
	  return 0;
}
