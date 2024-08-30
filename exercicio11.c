#include <stdio.h>

int main(void) {
	float salarioF, valorV, salarioT, comissao;
	
	printf("Salario fixo: ");
	scanf("%f", &salarioF);
	
	printf("Valor das vendas: ");
	scanf("%f", &valorV);
	
	if (valorV <= 1500)
	  comissao = valorV * 3 / 100;
	else
	  comissao = (1500 * 3 / 100) + ((valorV - 1500) * 5 / 100);
	
	salarioT = salarioF + comissao;
	
	printf("Salario total: %.2f reais\n", salarioT);
	
	return 0;
}
