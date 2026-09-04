#include <stdio.h>
#include <math.h>

int main()
{
    float cosseno = 0, xI, x;
    int fatorial, num, i;

    printf("Entre com o valor de x: ");
    scanf("%f", &xI);

    x = xI*3.14/180;

    for(i=0; i<20; i+=2)
    {
        num = i;
        fatorial = 1;
        while(num>=1)
        {
            fatorial = fatorial*num;
            num--;
        }

        cosseno = cosseno + pow(-1,i/2)*pow(x,i)/fatorial;
    }

    printf("cos(%.1f) = %.10f\n", xI, cosseno);
    printf("cos(%.1f) = %.10f", xI, cos(x));

    return 0;
}
