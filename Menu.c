#include <stdio.h>

int main()
{
		int ope;

		printf("Escolha umas das opções:\n");
		printf("1 - Salvar contato;\n");
		printf("2 - Editar contato;\n");
		printf("3 - Buscar contato;\n");
		printf("4 - Apagar contato;\n");
		printf("5 - Sair.\n");
		scanf("%d", &ope);

		/*if(ope ==1)
		{
			printf("Salvando...");
		}else if(ope==2)
		{
			printf("Editando...");
		}else if(ope==3)
		{
			printf("Buscando...");
		}else if(ope==4)
		{
			printf("Apagando...");
		}else if(ope==5)
		{
			printf("Sair.");
		}else
		{
			printf("Opção inválida.");
		}*/

		switch (ope)
		{
			case 1: printf("Salvando..."); break;
			case 2: printf("Editando..."); break;
			case 3: printf("Buscando..."); break;
			case 4: printf("Apagando..."); break;
			case 5: printf("Sair."); break;
			default:printf("Opção inválida."); break;
		}
		

}