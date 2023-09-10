#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"");
	//11
	//variáveis
	float valorA, valorB, valorC;
	float valorFinalA, valorFinalB, valorFinalC;
	//entrada
	printf("Declare o preço das camisetas: \n\n");
		scanf("%f", &valorA);	
	printf("Declare o preço das bermudas: \n\n");
		scanf("%f", &valorB);
	printf("Declare o preço das calças: \n\n");
		scanf("%f", &valorC);
	//processamento
	valorFinalA= valorA -(valorA * 0.2);
	valorFinalB= valorB -(valorB * 0.1);
	valorFinalC= valorC -(valorC * 0.15);
	//saída
	printf("o valor final das camisetas é igual a %2.f \n\n", valorFinalA);
	printf("o valor final das bermudas é igual a %2.f \n\n", valorFinalB);
	printf("o valor final das calças é igual a %2.f \n\n", valorFinalC);
	return 0;
}
