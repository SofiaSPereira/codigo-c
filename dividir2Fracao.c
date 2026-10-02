#include <stdio.h>
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

// Função para dividir duas frações
Fracao dividirFracao(Fracao a, Fracao b) {
    Fracao resultado;
    resultado.numerador = a.numerador * b.denominador;
    resultado.denominador = a.denominador * b.numerador;
    return resultado;
}

int main()
{
    Fracao f1 = criarFracao(1, 2);
    Fracao f2 = criarFracao(3, 4);

    Fracao div = dividirFracao(f1, f2);

    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    printf("Divisao: %d/%d\n", div.numerador, div.denominador);

    return 0;
}