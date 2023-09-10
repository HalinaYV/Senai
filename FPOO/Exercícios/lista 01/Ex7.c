#include<stdio.h>
int main (){
    printf("Uma fazenda em MG de 2 alqueires e 100 caminhoes produz em media 250 toneladas de laranjas por alqueire, a seguir, veremos o calculo para descobrir quantas viagens serao necessarias para transportar as laranjas de todos os 2 alqueires");
    printf("2 alqueires em MG sao aprox 96.800m quadrados \n");
    printf("caminhoes existentes na fazenda = 100 \n");
    int x = 96800;
    int y = 500;
    int z = 100;
    int k = (96800*500)/100;
    printf("Os alqueires multiplicados pelas toneladas darao as viagens x * y / z = %d",k);
    return 0;
}
