#include<stdio.h>
int main(){
	//1 Desenvolva um programa que leia o preço de um produto e se o preço for maior do que 1000 reais aplique um desconto de 8%. Mostre o preço final.
	float preco;

	printf("insira um preco \n");
	scanf("%f", &preco);
	
if(preco >= 1000){
	preco = preco * 0.92;
	printf("o preco com desconto de 8%% se da por &preco + (8%%100 * &preco) = %f \n",preco);
	
} else{
}
	printf("o valor nao se altera \n");
	
	return 0;
}
