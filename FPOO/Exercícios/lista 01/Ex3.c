#include<stdio.h>
int main (){
printf("Laura recebe 1500 reais de salaraio e esta prestes a receber um aumento de 16 por cento, snedo as variaveis: \n");
printf("x = salario inicial \n");
printf("y = porcentual do aumento \n");
printf("Sabendo as variaveis, seguimos com o calculo: \n");
int x = 1500;
int y = 16;
int z = (1500*16)/100+1500;
printf("A multiplicacao porcentual de 16 do salario inicial resultou em (1500*16)/100+1500 = %d",z);
    return 0;
}
