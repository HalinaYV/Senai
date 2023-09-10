#include <stdio.h>
int main(){
    
    int i;
    do{
    	printf("digite um numero inteiro");
    	scanf("%d",&i);
    	printf("o quadrado e %d", i * i);
	}while(i !=4);
	
    return 0;
}
