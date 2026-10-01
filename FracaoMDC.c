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

int calcularMDC(Fracao F) {
    int MDC = 1;
    int aux = (F.numerador > F.denominador) ? F.denominador : F.numerador;

    for (int i = 1; i <= aux; i++)
        if (F.numerador % i == 0 && F.denominador % i == 0)
            MDC = i;

    return MDC;
}

int main()
{
    Fracao f1 = criarFracao(3, 12);

    int mdc = calcularMDC(f1);

    printf("Fracao: %d/%d\n", f1.numerador, f1.denominador);
    printf("MDC: %d\n", mdc);

    return 0;
}