#include <stdio.h>
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Função para simplificar uma fração
Fracao simplificarFracao(Fracao f) {
    int gcd = mdc(f.numerador, f.denominador);
    f.numerador /= gcd;
    f.denominador /= gcd;
    return f;
}

int main()
{
    Fracao f1 = criarFracao(8, 12);

    Fracao simples = simplificarFracao(f1);

    printf("Fracao original: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao simplificada: %d/%d\n", simples.numerador, simples.denominador);

    return 0;
}