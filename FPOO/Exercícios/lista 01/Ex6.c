#include<stdio.h>
int main (){
    printf("Um aviao 747-300 que percorre 900km/h fara uma viagem ate Moscow, contando 11276km de distancia, o tempo de sobrevoo de ida segue-se no seguinte calculo \n");
    int x = 900;
    int y = 60;
    int z = 11276;
    int k = (900*60)/11276;
    printf("A distancia em horas equivale a 900*60/11276 = %d",k);
    return 0;
}
