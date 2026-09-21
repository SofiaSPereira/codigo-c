#include <stdio.h>

/*int potencia(int base, int exp)
{
	int result=1;

	for(int i=1;i<=exp;i++)
	{
		result = result*base;
	}

	return result;
}*/

int potencia(int base, int exp)
{
	if(exp==0)
		return 1;
	else
		return base*potencia(base, exp-1);

}

int main()
{
	int base, exp;	

	printf("Entre com a operação de potencia: ");
	scanf("%d^%d", &base, &exp);

	printf("%d^%d=%d", base, exp, potencia(base, exp));	



}