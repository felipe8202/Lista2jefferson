#include <stdio.h>

int main(void) {
	float valor1, valor2;
	
	printf("Digite um valor: ");
	scanf("%f", &valor1);
	
	printf("Digite um valor: ");
	scanf("%f", &valor2);
	
	if (valor1 > valor2)
	  printf("A ordem e: %.2f; %.2f\n", valor2, valor1);
	else
	  printf("A ordem e: %.2f; %.2f\n", valor1, valor2);
	
	return 0;
}
