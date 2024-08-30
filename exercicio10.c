#include <stdio.h>

int main(void) {
	char nome[20];
	char sexo;
	float altura, pesoI;
	
	printf("Nome: ");
	scanf("%19s", nome); 
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	getchar();
	
	printf("Sexo (M para masculino e F para feminino): ");
	scanf("%c", &sexo);
	
	if (sexo == 'M' || sexo =='m')
	  pesoI = (72.7 * altura) - 58;
	else if (sexo == 'F' || sexo == 'f')
	  pesoI = (62.1 * altura) - 44.7;
	
	printf("Peso ideal: %.2f kg\n", pesoI);
	
	return 0;
}
