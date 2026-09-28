#include <stdio.h>

static int count=0;

void torreHannoi(int discos, char origem, char auxiliar, char destino)
{

	if(discos==1)
	{
		printf("Mova o disco 1 de %c para %c\n", origem, destino);	
		count++;
		return;
	}
	
	torreHannoi(discos-1, origem, destino, auxiliar);

	printf("Mova o disco %d de %c para %c\n", discos, origem, destino);
	count++;

	torreHannoi(discos-1, auxiliar, origem, destino);

}


int main()
{

	int  discos;
	

	printf("Quantos discos? ");
	scanf("%d", &discos);

	printf("Sequencia de movimentos:\n");
	torreHannoi(discos, 'A', 'B', 'C');

	printf("A quantidade mínima de movimentos: %d", count);


}