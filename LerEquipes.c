#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Posicao;
    char Estado[3];
    char Time[64];
    int Pontos;
    int J;  // Jogos
    int V;  // Vitórias
    int E;  // Empates
    int D;  // Derrotas
    int GP; // Gols pró
    int GC; // Gols contra
    int SD; // Saldo de gols
    float Aproveitamento;
} Equipe;

Equipe* LerDados(const char *NomeArquivo) {

	FILE *fp = fopen(NomeArquivo, "r");
	Equipe *X = malloc(20 * sizeof(Equipe));
	int N = 0;
	char Cabecalho[64];
	fscanf(fp, "%s", Cabecalho);
	while (fscanf(fp,"%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d;", &X[N].Posicao, X[N].Estado,
    X[N].Time, &X[N].Pontos,&X[N].J,&X[N].V,&X[N].E,&X[N].D,&X[N].GP,&X[N].GC,&X[N].SD ) ==
    11) {
        X[N].Aproveitamento = 100 * (float) X[N].Pontos / (float) (3 * X[N].J);
        N++;
    }
    fclose(fp);
    return X;
}

int main() {
    Equipe *tabela = LerDados("campeonato.csv");

    for (int i = 0; i < 3; i++) { // ajuste o número de linhas conforme o arquivo
        printf("%d - %s (%s): %d pontos, aproveitamento %.1f%%\n",
               tabela[i].Posicao, tabela[i].Time, tabela[i].Estado,
               tabela[i].Pontos, tabela[i].Aproveitamento);
    }

    free(tabela);
    return 0;
}