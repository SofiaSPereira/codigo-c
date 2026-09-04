#include <stdio.h>

int cpf(long n, int d)
{
	long num;
	int soma, mult, sub;
	int digito = 0;
	int i;

	for (i=1; i<=2; i++)
	{
		soma=0;
		mult = 1;
		sub = 0;
		num = n;
	
		while(num!=0)
		{
			soma= soma + num%10;
			num=num/10;		
		}
		while(soma!=0)
		{
			mult= mult * (soma%10);
			soma=soma/10;
		}
		while(mult!=0)
		{
			sub = mult%10-sub;
			mult = mult/10;
		}
		sub=sub*(-1);
		digito = digito*10+sub;
	}
	return digito == d ? 1:0;
}

int main()
{
	long n;
	int d;
	printf("Digite seu CPF: ");
	scanf("%ld-%d", &n, &d);
	if (cpf(n,d)==1)
		printf("CPF válido!");
	else
		printf("CPF inválido!");
	return 0;
}
