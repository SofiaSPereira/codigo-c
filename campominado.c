#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarMina(int linha, int coluna, int campo[8][8])
{
	int minaLinha, minaColuna,achou=0;

	for(int i=0;i<8;i++)
		{	
			for(int j=0;j<8;j++)
			{
				if(campo[i][j]==100)
				{
					minaLinha = i;
					minaColuna = j;
				}

				if(minaLinha == (linha-1) && minaColuna == (coluna-1))
					achou=1;
			}
		}

		return achou;
}

void gerarMinas(int nivel, int campo[8][8])
{
	srand(time(0));

	int linha,coluna;

	for(int bomba=1;bomba<=nivel;bomba++)
	{
		do
		{
			linha = rand()%10;
			coluna = rand()%10;
		}while(linha==9||linha==8||coluna==9||coluna==8);

		campo[linha][coluna] = 100;
	}
	
}

void imprimirCampo(int campo[8][8])
{
		printf("\n");
	
		printf("   12345678\n");
		printf("   =========\n");
		for(int i=0;i<8;i++)
		{	
			printf("%d", i+1);
			printf("||");
			for(int j=0;j<8;j++)
			{
				printf("%c", campo[i][j]);
			}
			printf("||");
			printf("\n");
		}
		printf("   =========\n");
}

void inicializarCampo(int campo[8][8])
{
		for(int i=0;i<8;i++)
		{	
			for(int j=0;j<8;j++)
			{
				campo[i][j]= 204;
			}
		}
}

int main()
{
	int linha, coluna, nivel;
	int campo[8][8];

	inicializarCampo(campo);
	imprimirCampo(campo);
	
	printf("Qual o nível de dificuldade? \n");
	printf("1-fácil\n");
	printf("2-médio\n");
	printf("3-difícil\n");
	printf("4-impossível\n");
	scanf("%d", &nivel);
	fflush(stdin);

	gerarMinas(nivel*8,campo);
	imprimirCampo(campo);

	while (1)
	{
		printf("Digite as posições do campo minado: \n");
		printf("(0,0) para sair do jogo.\n");
		scanf("(%d,%d)", &linha, &coluna);
		fflush(stdin);

		if(linha == 0 && coluna == 0 || verificarMina(linha,coluna,campo))
			break;
	}


}