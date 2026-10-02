#include <stdio.h>
#include <windows.h>

void listFilesInDirectory(const char *directoryPath) {
	WIN32_FIND_DATA findFileData;
	HANDLE hFind;
	char searchPath[MAX_PATH];
	snprintf(searchPath, sizeof(searchPath), "%s\\*", directoryPath);
	hFind = FindFirstFile(searchPath, &findFileData);
	if (hFind == INVALID_HANDLE_VALUE) {
		printf("Erro ao abrir o diretório ou diretório vazio.\n");
		return;
	}

	do {
		if (strcmp(findFileData.cFileName, ".") == 0 || strcmp(findFileData.cFileName, "..") == 0)
			continue;
		if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			printf("%s\\%s\n", directoryPath, findFileData.cFileName);
	} while (FindNextFile(hFind, &findFileData) != 0); // Continua buscando
	FindClose(hFind);
}

int main() {
	listFilesInDirectory("C:\\projetos");
	return 0;
}