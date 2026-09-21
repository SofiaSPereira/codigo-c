#include <stdio.h>
#include <stdlib.h>

int main () {
	
	// tipo nome;
	char sexo;
	int idade;
	float peso, altura;
	
	printf("valor da variavel sexo: %c\n", sexo);
	
	printf("digite seu sexo (f,F, m ou M), idade, peso e altura:\n");
	scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
	
	printf("sexo: %c\nidade: %d\npeso: %1.f\naltura: %.2f\n", sexo, idade, peso, altura);
	return 0;
	
}
