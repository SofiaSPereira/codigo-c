#include <stdio.h>
#include <stdlib.h>

int main () {
	
	// tipo nome;
	char sexo;
	int idade;
	float peso, altura;

    // buffer do teclado -> 45\n56.2\n1.63\n
		
	printf("digite idade, peso, altura e o sexo (f,F, m ou M):\n");
	scanf("%d%f%f%c", &idade, &peso, &altura, & sexo);
	
	printf("sexo: %c\nidade: %d\npeso: %1.f\naltura: %.2f\n", sexo, idade, peso, altura);
	return 0;
	
}
