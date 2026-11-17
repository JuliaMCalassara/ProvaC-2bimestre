#include <stdio.h>
#include <iostream>
#include <locale.h>

int opcao;
float numeroUm;
float numeroDois;
float resultado;

int main() {
	setlocale(LC_ALL, "Portuguese");

    printf("\n1. Soma \n \n2. Subtração \n \n3. Multiplicação \n \n4. Divisão");
    printf("\nEscolha sua opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%f", &numeroUm);

    printf("Digite o segundo número: ");
    scanf("%f", &numeroDois);

    switch (opcao) {

        case 1:
            resultado = numeroUm + numeroDois;
            printf("Soma: %.2f ", resultado);
            break;
        case 2:
            resultado = numeroUm - numeroDois;
            printf("Subtração: %.2f", resultado);
            break;
        case 3: 
            resultado = numeroUm * numeroDois;
            printf("Multiplicação: %.2f", resultado);
            break;
        case 4:
            resultado = numeroUm / numeroDois;
            printf("Divisão: %.2f", resultado);        
        default: 
            printf("Opção inválida!");
    }

	return 0;
}
