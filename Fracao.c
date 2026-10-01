#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

int main()
{
    Fracao f1 = criarFracao(3, 4);

    printf("Fracao criada: %d/%d\n", f1.numerador, f1.denominador);

    return 0;
}