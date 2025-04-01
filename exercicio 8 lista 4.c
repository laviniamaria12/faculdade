#include <stdio.h>
#include <string.h>

int encontrarIndice(const char *str1, const char *str2) {
    char *posicao = strstr(str1, str2);
    if (posicao) {
        return posicao - str1;
    }
    return -1;
}

int main() {
    char string1[100], string2[50];

    printf("Primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("Segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';

    int indice = encontrarIndice(string1, string2);

    if (indice != -1) {
        printf("Encontrado: %d\n", indice);
    } else {
        printf("Não encontrada.\n");
    }

    return 0;
}