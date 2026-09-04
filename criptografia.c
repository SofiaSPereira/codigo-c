#include <stdio.h>

int main()
{
	int num, d1, d2, d3, d4, aux;

	printf("Digite um numero: ");
	scanf("%d", &num);

	d4 = num%10;
	
	num = num/10;
	d3 = num%10;

	num = num/10;
	d2 = num%10;

	num = num/10;
	d1 = num%10;

	
	d1 = (d1+7)%10;
	d2 = (d2+7)%10;
	d3 = (d3+7)%10;
	d4 = (d4+7)%10;

	aux = d1;
	d1 = d3;
	d3 = aux;

	aux = d2;
	d2 = d4;
	d4 = aux;


	printf("Criptografado:\n");
	printf("%d%d%d%d\n", d1, d2, d3,d4);

	printf("Digite um numero para descriptografia: ");
	scanf("%d", &num);

	
	d4 = num%10;
	
	num = num/10;
	d3 = num%10;

	num = num/10;
	d2 = num%10;

	num = num/10;
	d1 = num%10;

	aux = d1;
	d1 = d3;
	d3 = aux;

	aux = d2;
	d2 = d4;
	d4 = aux;

	d1 = (d1+3)%10;
	d2 = (d2+3)%10;
	d3 = (d3+3)%10;
	d4 = (d4+3)%10;
	

	printf("Descriptografado:\n");
	printf("%d%d%d%d\n", d1, d2, d3,d4);

}
