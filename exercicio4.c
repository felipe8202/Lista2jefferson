#include <stdio.h>

int main(void) {
	float nota1, nota2, media;
	
	printf("Nota da primeira avalia��o: ");
	scanf("%f", &nota1);
	
	printf("Nota da segunda avalia��o: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media >= 7)
	  printf("Aluno aprovado! \n");
	else
	  printf("Aluno reprovado! \n");
	  
	printf("M�dia do aluno: %.2f\n", media);
	
	return 0;
}
