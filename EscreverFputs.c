#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE *arquivo;
	arquivo = fopen("saida.txt", "w");
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}

	// Escrevendo uma string no arquivo
	const char *mensagem = "Esta é uma mensagem de exemplo.";
	fputs(mensagem, arquivo);

	fclose(arquivo);
	return 0;
}