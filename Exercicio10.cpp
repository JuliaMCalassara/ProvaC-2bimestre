#include <stdio.h>
#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0){
            printf("\n%d", i);
        }
    }

	return 0;
}
