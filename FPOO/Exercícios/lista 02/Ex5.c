#include<stdio.h>
#include<string.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"");
	
	//5 
	
	//variáveis
	
	float valor, valorFinalA, valorFinalB;
	char mercadoria;
	
	//entrada
	
	printf("insira o nome de uma mercadoria: \n\n");
		scanf("%s", &mercadoria);
		
	printf("insira o valor da mercadoria: \n\n");
		scanf("%f", &valor);
		
	//processamento
	
	valorFinalA = (valor * 0.05) + valor;
	valorFinalB = (valor * 0.07) + valor;
	
	//saída
	
	if(valor <1000){
		printf("valor final igual a %2.f", valorFinalA);
	}
	else{
		printf("valor final igual a %2.f", valorFinalB);
	}
	
	return 0;
}
