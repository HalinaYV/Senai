#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"");
	//10
	
	//variáveis
	int nota1, nota2, nota3;
	int media;
	//entrada
	printf("insira 3 notas do aluno a ser avaliado: \n\n");
		scanf("%d%d%d", &nota1, &nota2, &nota3);
	//processamento
	media = (nota1 + nota2 + nota3) / 3;
	//saída
	if(media >= 6){
		printf("Aprovado.");
		scanf("%d", &media);
	}
	if((media < 6) && (media = 4)){
		printf("Recuperação.");
		scanf("%d", &media);
	}
	if(media < 4){
		printf("Reprovado.");
		scanf("%d", &media);
	}
	else{
	}
	return 0;
}
