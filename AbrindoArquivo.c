#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *arquivo;
	arquivo = fopen("arquivo.txt", "w");

	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo.\n");
		exit(1);
	}

	fclose(arquivo);
	return 0;
}