#include<stdio.h>
int main (){
    printf("Milagre possui um total de 101.000 habitantes, na apuracao da ultima eleicao, obtveram-se 90.000 votos, calculando, obtemos a seguinte porcentagem de eleitores \n");
    printf("Cidade: Milagre \n");
    printf("Habitantes: 101.000 \n");
    printf("Votos apurados: 90.000 \n");
    int x = 101000;
    int y = 90000;
    int z = (90000/101000)*100 ;
    printf("A cidade de Milagre teve (90000/101000)*100 = %.0f%%",z);
    return 0;
}
