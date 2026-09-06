#include <stdio.h>


void histograma(int td, int ts, int tt, int tq, int tqi, int tsx,int tsa)
{

	printf("D: ");
	for(int i=1; i<=td;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=ts;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("T: ");
	for(int i=1; i<=tt;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("Q: ");
	for(int i=1; i<=tq;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("Q: ");
	for(int i=1; i<=tqi;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=tsx;i++)
	{
		printf("\u25A0");
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=tsa;i++)
	{
		printf("\u25A0");
	}
	printf("\n");


}

int main()
{
	int td, ts, tt, tq, tqi, tsx, tsa;

	printf("Digite a temperatura de Domingo: ");
	scanf("%d", &td);

	printf("Digite a temperatura de Segunda: ");
	scanf("%d", &ts);

	printf("Digite a temperatura de Terça: ");
	scanf("%d", &tt);

	printf("Digite a temperatura de Quarta: ");
	scanf("%d", &tq);

	printf("Digite a temperatura de Quinta: ");
	scanf("%d", &tqi);
	
	printf("Digite a temperatura de Sexta: ");
	scanf("%d", &tsx);

	printf("Digite a temperatura de Sábado: ");
	scanf("%d", &tsa);
	
	histograma(td,ts,tt,tq,tqi,tsx,tsa);
	
}