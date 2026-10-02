#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arquivo;
	int id, idade;
	char nome[50];

	arquivo = fopen("dados.csv", "r"); // Abre o arquivo CSV para leitura
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}

	fscanf(arquivo, "%*[^,],%*[^,],%*s"); // Lê e descarta a primeira linha
	printf("ID\tNome\tIdade\n");
	while (fscanf(arquivo, "%d,%49[^,],%d", &id, nome, &idade) == 3) {
		printf("%d\t%s\t%d\n", id, nome, idade);
	}

	fclose(arquivo);
	return 0;
}