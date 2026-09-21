#include <stdio.h>
#include <stdlib.h>

int main () {
	
	// tipo nome;
	char sexo = 'k';
	
	printf("valor da variavel sexo: %c\n", sexo);
	
	printf("digite seu sexo: (f, F, m ou M)");
	scanf("%c", &sexo);
	
	printf("valor da variavel sexo: %c\n", sexo);
	return 0;
}
