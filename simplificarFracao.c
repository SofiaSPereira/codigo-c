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

int main()
{
    Fracao f1 = criarFracao(8, 12);
    Fracao f2 = simplificarFracao(f1);

    printf("Fracao original: %d/%d\n", f1.numerador, f1.denominador);
    printf("Fracao simplificada: %d/%d\n", f2.numerador, f2.denominador);

    return 0;
}