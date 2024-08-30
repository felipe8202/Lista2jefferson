#include <stdio.h>

int main(void) {
	float macas, preco;
	printf("Digite quantas maçãs foram compradas: ");
	scanf("%f", &macas);
	
	if (macas < 12)
	  preco = macas * 1.30;
	else 
	  preco = macas * 1.00;  
	
	printf("O custo total das maçãs foi: %.2f\n", preco);
	
	return 0;
}
