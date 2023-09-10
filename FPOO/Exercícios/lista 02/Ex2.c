#include<stdio.h>
int main(){
	//2 Desenvolva um programa que leia o salário de um funcionário e o número de filhos. Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho. Apresente o salário final.
int salario;
int filhos;
int beneficio;
	printf("insira um salario para um trabalhador \n");
	scanf("%d", &salario);
	
if (salario < 2000){
	printf("o trabalhador recebe 45 reais a mais por filho, insira uma quantidade de filhos para o trabalhador \n");
	scanf("%d", &filhos);
	
	beneficio = filhos * 45;
	salario = beneficio + salario;
	
	printf("o salario sofreu alteracoes e agora e de (beneficio + salario) = %d \n",salario);
}else
	printf("o salario nao sofreu alteracoes \n");

	return 0;
	
}
