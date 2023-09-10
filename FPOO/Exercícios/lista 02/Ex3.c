#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"");
	
	//3 Desenvolva um programa que calcule desconto de INSS de um funcionário.
	
	//variáveis
	
	float salario, salarioFinalA, salarioFinalB, salarioFinalC, salarioFinalD;
	
	//entrada
	
	printf("Insira o salário de um funcionário: \n \n", salario);
	scanf("%f", &salario);
	
	//processamento
	
	salarioFinalA = (salario * 0.075) - salario;
	salarioFinalB = (salario * 0.09) - salario;
	salarioFinalC = (salario * 0.012) - salario;
	salarioFinalD = (salario * 0.014) - salario;
	
	//saída
	
	if(salario <= 1212.00){
		printf("desconto de 7,5 por cento, igual a %2.f \n\n", salarioFinalA);
	}
	if(salario = 1212.01 <= 2427.35){
		printf("desconto de 9 por cento, igual a %2.f \n\n", salarioFinalB);
	}
	if(salario = 2427.36 <= 3641.03){
		printf("desconto de 12 por cento, igual a %2.f \n\n", salarioFinalC);
	}
	if(salario = 3641.04 <= 7087.22){
		printf("desconto de 14 por cento, igual a %2.f \n\n", salarioFinalD);
	}
	else if(salario > 7087.22){
		printf("desconto de 14 por cento, igual a %2.f \n\n", salarioFinalD);
	}
	
	
	return 0;
}
