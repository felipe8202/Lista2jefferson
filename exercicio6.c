#include <stdio.h>

int main(void) {
	
	float valor1, valor2;
	
	printf("Digite um valor: ");
	scanf("%f", &valor1);
	
	printf("Digite um valor: ");
	scanf("%f", &valor2);
	
	if (valor1 > valor2)
	  printf("O valor maior e: %.2f\n", valor1);
	else
	  printf("O valor maior e: %.2f\n", valor2);
	
	return 0;
}
