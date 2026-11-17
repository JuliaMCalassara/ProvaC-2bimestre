#include <stdio.h>
#include <iostream>
#include <locale.h>

int senha; 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
   do {
      printf("Digite a senha: ");
      scanf("%d", &senha);
     
      
   } while (senha == 123);
      printf("Senha correta!");
      printf("Acesso liberado!");
   
	
	return 0;
}
