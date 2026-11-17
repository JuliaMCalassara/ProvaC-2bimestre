#include <stdio.h>
#include <iostream>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int i;

    while (i <= 1 || i >= 5) {
        for (i = 1; i <= 5; i++) {
            printf("\n%d", i);
        }   
    }

	return 0;
}
