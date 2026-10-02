#include <stdio.h>
#include <sys/stat.h>

void checkFileType(const char *filePath) {
	struct stat fileStat;
	if (stat(filePath, &fileStat) == -1) {
		perror("Erro ao acessar o arquivo");
		return;
	}

	// Verificar tipo de arquivo aqui !!!
	if (S_ISREG(fileStat.st_mode))
		printf("%s é um arquivo regular.\n", filePath);
	else if (S_ISDIR(fileStat.st_mode))
		printf("%s é um diretório.\n", filePath);
	else
		printf("%s é de outro tipo.\n", filePath);
}

int main() {
	checkFileType("dados.csv");
	checkFileType("C:\\projetos");
	return 0;
}