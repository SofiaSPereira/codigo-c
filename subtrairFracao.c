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

Fracao simplificarFracao(Fracao F) {
    int MDC = 1;
    int aux = (F.numerador > F.denominador) ? F.denominador : F.numerador;

    for (int i = 1; i <= aux; i++)
        if (F.numerador % i == 0 && F.denominador % i == 0)
            MDC = i;

    F.numerador = F.numerador / MDC;
    F.denominador = F.denominador / MDC;

    return F;
}

// Função para subtrair duas frações
Fracao subtrairFracao(Fracao F, Fracao G) {
    Fracao resultado;

    resultado.numerador = (F.numerador * G.denominador) - (G.numerador * F.denominador);
    resultado.denominador = F.denominador * G.denominador;
    resultado = simplificarFracao(resultado);

    return resultado;
}

int main()
{
    Fracao f1 = criarFracao(8, 4);
    Fracao f2 = criarFracao(5, 4);

    Fracao sub = subtrairFracao(f1, f2);

    printf("Fracao 1: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao 2: %d/%d\n", f2.numerador, f2.denominador);
    printf("Subtracao simplificada: %d/%d\n", sub.numerador, sub.denominador);

    return 0;
}