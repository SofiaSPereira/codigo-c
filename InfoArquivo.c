#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

int main() {

	const char *filePath = "dados.csv"; // Caminho do arquivo
	struct stat fileStat;
	if (stat(filePath, &fileStat) == -1) return 1; // Recupera informações do arquivo

	printf("Tamanho do arquivo: %ld bytes\n", fileStat.st_size);
	printf("Última modificação: %s", ctime(&fileStat.st_mtime));
	printf("Número de links: %ld\n", fileStat.st_nlink);
	printf("ID do proprietário: %d\n", fileStat.st_uid);
	printf("Permissões: %o\n", fileStat.st_mode & 0777);

	return 0;
}