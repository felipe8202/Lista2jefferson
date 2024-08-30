#include <stdio.h>

int main(void) {
	
	float valor;
	
	printf(" Digite um valor qualquer: ");
	scanf("%f", &valor);
	
	if (valor > 10)	
	   printf("MAIOR QUE 10!\n");	   
	else 
	   printf("NAO É MAIOR QUE 10!\n");
	
	return 0;
}
