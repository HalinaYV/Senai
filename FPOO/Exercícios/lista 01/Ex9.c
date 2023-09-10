#include<stdio.h>
int main (){
    printf("Uma loja vende capas para celulares por aprox 25 reais, na atual economia, o dono resolveu aumentar o preco em 5 por cento, mostrando a seguir \n");
    printf("preco inicial = 25 reais \n");
    printf("aumento = 5 por cento \n");
    int x = 25;
    int y = 5;
    int z = (25*5)/100+25;
    printf("O calculo do percentual (25*5)/100+25 = %d",z);
    return 0;
}
