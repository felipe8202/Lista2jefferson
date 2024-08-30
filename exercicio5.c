#include <stdio.h>

int main(void) {
	
	int anoA, anoN, votar;
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoA);
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anoN);	
	
	votar = (anoA - anoN);
	
	if (votar >= 16)
	  printf("Voce podera votar! \n");
	else
	  printf("Voce nao podera votar! \n");  
	
	return 0;
}
