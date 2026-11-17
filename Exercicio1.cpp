#include <stdio.h>
#include <iostream>
#include <locale.h>

float numeroUm;
float numeroDois; 
float soma; 
float subtracao;
float multiplicacao;
float divisao;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número: ");
	scanf("%f", &numeroUm);
	
	printf("Digite o segundo número: ");
	scanf("%f", &numeroDois);
	
	soma = numeroUm + numeroDois;
	printf("\nSoma: %.2f\n", soma);
		
	subtracao = numeroUm - numeroDois;	
	printf("\nSubtração: %.2f\n", subtracao);
	
	multiplicacao = numeroUm * numeroDois;
	printf("\nMultiplicação: %.2f\n", multiplicacao);
	
	divisao = numeroUm / numeroDois;
	printf("\nDivisão: %.2f\n", divisao);
	
	return 0;
}
