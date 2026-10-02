#include <stdio.h>
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

// Função para somar duas frações
Fracao somarFracao(Fracao a, Fracao b) {
    Fracao resultado;
    resultado.numerador = (a.numerador * b.denominador) + (b.numerador * a.denominador);
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

int main()
{
    Fracao f1 = criarFracao(1, 2);
    Fracao f2 = criarFracao(1, 3);

    Fracao soma = somarFracao(f1, f2);

    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    printf("Soma: %d/%d\n", soma.numerador, soma.denominador);

    return 0;
}