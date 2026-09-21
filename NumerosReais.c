#include <stdio.h>
#include <stdlib.h>

int main () {
	
	// tipo nome;
	float numero = 3.1415;
	
	printf("valor da minha variavel: %.2f\n", numero);
	
	printf("digite um numero real:");
	scanf("%f", &numero);
	
	printf("valor lido: %.3f", numero);
	
	/*
	int valor, valor2;// criei uma variarel para guardar um valor de tipos inteiro
	
    // atribuiçao -> atribuir um valor a uma variavel
    valor = 50;
    
    printf("digite um valor inteiro:");
    scanf("%d", &valor);
    
    printf("digite um segundo valor inteiro:");
    scanf("%d", &valor2);
    
	printf("\n\nprimeiro valor: %d\nsegundo valor: %d\n\n", valor, valor2);
	*/
	
	return 0;
}