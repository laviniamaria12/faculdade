#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **dividirString(const char *str, char delim, int *qtd) {
    int i, tam = strlen(str), partes = 1;

    for (i = 0; i < tam; i++) {
        if (str[i] == delim) {
            partes++;
        }
    }

    char **vetor = (char **)malloc(partes * sizeof(char *));
    char *copia = strdup(str);

    char *temp = strtok(copia, &delim);
    i = 0;
    while (temp) {
        vetor[i] = temp;
        temp = strtok(NULL, &delim);
        i++;
    }

    *qtd = partes;
    return vetor;
}

int main() {
    char entrada[100];
    char separador;
    int quantidade, i;

    scanf("%s %c", entrada, &separador);
    
    char **resultado = dividirString(entrada, separador, &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("%s\n", resultado[i]);
    }

    return 0;
}