#include <stdio.h>

int main()
{
	int num, fatorial=1;
	int numI;
	int i;
	
	printf("Entre com um número: ");
	scanf("%d", &num);
	numI = num;
	
	for(i=num; i!=1; i--)
	{
		fatorial = fatorial*i;
	}	
	/*while(num>=1)
	{
		fatorial = fatorial*num;
		num--;
	}*/
	printf("O fatorial de %d é %d", numI, fatorial);
	
	return 0;
}
