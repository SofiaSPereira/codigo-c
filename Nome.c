#include <stdio.h>


int main()
{
	char nome[20];
	char usuario[20];
	
	printf("Insira um nome: ");
	fgets(nome,sizeof(nome),stdin);

	for(int i=0;i<20;i++)
	{
		usuario[i]=nome[i];
	}
	
	printf("%s", nome);
	


}