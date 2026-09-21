#include <stdio.h>
#include <stdlib.h>


int main()
{

	char matriz[3][3];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			printf("matriz[%d][%d]: ", i,j);
			scanf("%c", &matriz[i][j]);
			fflush(stdin);
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			printf(" %c ", matriz[i][j]);
			if(j<2)
				printf("|");
		}
		
		if(i<2)
			printf("\n---+---+---\n");
	}
	

}