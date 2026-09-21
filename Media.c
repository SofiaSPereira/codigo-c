#include <stdio.h>


void inserir(int v[], int num)
{
	for(int i=0; i<num;i++)
	{
		printf("Insira a nota %d: ", i+1);
		scanf("%d", &v[i]);
	}
}

void imprimir(int v[], int num)
{
	for(int i=0; i<num;i++)
	{
		printf("A nota %d é %d.\n", i+1, v[i]);
	}

}

float media(int v[], int num)
{
	float media=0;

	for(int i=0; i<num;i++)
	{
		media = media + v[i];
	}
	media = media/num;

	return media;
}

int main()
{
	int num;

	printf("Quantas notas? ");
	scanf("%d", &num);

	int notas[num];

	inserir(notas, num);
	imprimir(notas, num);
	
	printf("A média de notas é: %.2f", media(notas, num));

}