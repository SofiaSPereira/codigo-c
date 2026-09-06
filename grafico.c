#include <stdio.h>

int main()
{
	int num, aCount=0, bCount=0, cCount=0, dCount=0, eCount=0, qtd=1;

	while(qtd<=30)
	{
		printf("Entre com um número:");
		scanf("%d", &num);

		switch(num)
		{
			case 10:
			case 9:
				++aCount;
				break;

			case 8:
			case 7:
				++bCount;
				break;

			case 6:
			case 5:
				++cCount;
				break;

			case 4:
			case 3:
				++dCount;
				break;

			case 2:
			case 1:
			case 0:
				++eCount;
				break;

			default:
				printf("Número inválido\n");	
		}
		qtd++;
	}

	printf("\n10-9: \t");
	for(int i=1; i<=aCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n8-7: \t");
	for(int i=1; i<=bCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n6-5: \t");
	for(int i=1; i<=cCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n4-3: \t");
	for(int i=1; i<=dCount;i++)
	{
		printf("\u25A0");
	}

	printf("\n2-0: \t");
	for(int i=1; i<=eCount;i++)
	{
		printf("\u25A0");
	}
}