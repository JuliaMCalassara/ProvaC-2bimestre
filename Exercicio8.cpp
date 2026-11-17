#include <stdio.h>
#include <iostream>
#include <locale.h>

int numero;
int resultado;

int main() {
	setlocale(LC_ALL, "Portuguese");
 
    printf("Digite o número que deseja: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
        resultado = i * numero;
        printf("\n%d * %d = %d", numero, i, resultado);
    }

	return 0;
}
