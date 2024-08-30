#include <stdio.h>
 
int main(void) {
	
	int horaI, horaF, duracao;
	
	printf("Hora de inicio (00 a 23): ");
	scanf("%d", &horaI);
	
	printf("Hora do fim (00 a 23): ");
	scanf("%d", &horaF);
	
	if (horaF >= horaI)
	  duracao = (horaF - horaI); 
	else
	  duracao = (24 - horaI) + horaF;
	  
	if (duracao > 24)
	  duracao = 24; 

    printf("Duracao do jogo foi de: %d\n", duracao);
	  
	return 0;
}
