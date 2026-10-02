#include <stdio.h>
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

// Função para subtrair duas frações
Fracao subtrairFracao(Fracao a, Fracao b) {
    Fracao resultado;
    resultado.numerador = (a.numerador * b.denominador) - (b.numerador * a.denominador);
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

int main()
{
    Fracao f1 = criarFracao(3, 4);
    Fracao f2 = criarFracao(3, 4);

    Fracao sub = subtrairFracao(f1, f2);

    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    printf("Subtracao: %d/%d\n", sub.numerador, sub.denominador);

    return 0;
}