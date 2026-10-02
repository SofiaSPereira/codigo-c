#include <stdio.h>
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

// Função para multiplicar duas frações
Fracao multiplicarFracao(Fracao a, Fracao b) {
    Fracao resultado;
    resultado.numerador = a.numerador * b.numerador;
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

int main()
{
    Fracao f1 = criarFracao(5, 3);
    Fracao f2 = criarFracao(3, 4);

    Fracao mult = multiplicarFracao(f1, f2);

    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    printf("Multiplicacao: %d/%d\n", mult.numerador, mult.denominador);

    return 0;
}