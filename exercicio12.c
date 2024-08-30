#include <stdio.h>

int main(void) {
	float Nconta, saldo, debito, credito, saldoA;
	
	printf("Numero da conta: ");
	scanf("%f", &Nconta);
	
	printf("Saldo: ");
	scanf("%f", &saldo);
	
	printf("Debito: ");
	scanf("%f", &debito);
	
	printf("Credito: ");
	scanf("%f", &credito);
	
	saldoA = saldo + debito + credito;
	
	if (saldoA >= 0) 
       printf("Saldo positivo. \n");
    else    
       printf("Saldo negativo. \n");
       
    return 0;
}
