#include<stdio.h>
int main(){
	//4 Desenvolva um programa que leia os valores de três lados de um triângulo (a, b e c) e se os três lados forem diferentes escreva ESCALENO se os três lados forem iguais EQUILÁTERO e se apenas dois lados forem iguais ISÓSCELES.
		float a, b, c;
		
		printf("digite o valor do lado a:");
		scanf("%f", &a);
		
		printf("digite o valor do lado b:");
		scanf("%f", &b);
		
		printf("digite o valor do lado c:");
		scanf("%f", &c);
		
		if(a !=b && a != c && b != c){
			printf("triangulo escaleno");
		}else if(a == b && a == c){
			printf("triangulo equilatero");
		}else{
			printf("triangulo isosceles");
		}
		return 0;
		}
