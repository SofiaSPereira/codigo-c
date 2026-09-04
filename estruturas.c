#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	typedef struct
	{
		int dia;
		int mes;
		int ano;
	} DATA;
	typedef struct
	{
		char nome[45];
		DATA nasc;
		float salario;	
	}FUNCIONARIO;
	
	FUNCIONARIO func[2];
	int i;
	int count=0;
	
	/*for(i=0;i<2;i++)
	{
		printf("Digite o nome do funcionário %d: ", i+1);
		//scanf("%44[^\n]",func[i].nome );
		fgets(func[i].nome, sizeof(func[i].nome),stdin);
		fflush(stdin);
		int pos = strcspn(func[i].nome, "\n");
		func[i].nome[pos] = '\0';
		
		printf("Digite a data de nascimento do funcionário %d: ", i+1);
		scanf("%d/%d/%d", &func[i].nasc.dia, &func[i].nasc.mes, &func[i].nasc.ano);
		fflush(stdin);
		printf("Digite o saláriodo funcionário %d: ", i+1);
		scanf("%f", &func[i].salario);
		fflush(stdin);
	}*/
	
	FILE *arquivo = fopen("empresa.csv","r");
	
	while(!feof(arquivo) && arquivo !=NULL)
	{
		//fprintf(arquivo, "%s,%d,%f\n",func[i].nome,2024-func[i].nasc.ano,func[i].salario);
		fscanf(arquivo,"%44[^,],%d,%f", func[count].nome, &func[count].nasc.ano,&func[count].salario);
		
		count++;
	}
	
	for(i=0;i<2;i++)
	{
		fprintf(stdout, "%s,%d,%f\n",func[i].nome,2024-func[i].nasc.ano,func[i].salario);
		//fscanf(arquivo,"%44[^\n],%d,%f", &func[i].nome, &func[i].nasc.ano,&func[i].salario);
	}
	
	fclose(arquivo);
	
	return 0;
}
