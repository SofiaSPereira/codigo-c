#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int valor, valor2;// criei uma variarel para guardar um valor de tipos inteiro
	
    // atribuiçao -> atribuir um valor a uma variavel
    valor = 50;
    
    printf("digite um valor inteiro:");
    scanf("%d", &valor);
    
    printf("digite um segundo valor inteiro:");
    scanf("%d", &valor2);
    
	printf("\n\nprimeiro valor: %d\nsegundo valor: %d\n\n", valor, valor2);
	printf("\n\nvalor da minha variavel: %d\n\n", valor);
    
	return 0;
 }