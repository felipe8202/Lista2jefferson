#include <stdio.h>

int main(void) {
	float horasT, salarioH, salarioT, horasX;
	
	printf("Horas trabalhadas em um mes: ");
	scanf("%f", &horasT);
	
	printf("Salario por hora: ");
	scanf("%f", &salarioH);
	
	horasX = horasT - 160;
	
	if (horasT > 160)
	  salarioT = (salarioH * 160) + (horasX * (salarioH * 150 / 100));
	else
	  salarioT = salarioH * 160;
	
	printf("Salario total do funcionario: %.2f reais\n", salarioT);
	
	return 0;
}
