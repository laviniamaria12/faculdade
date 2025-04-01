#include <stdio.h>
#include <string.h>

void concatenarStrings(char *destino, const char *str1, const char *str2) {
    int i, j;
    
    
    for (i = 0; str1[i] != '\0'; i++) {
        destino[i] = str1[i];
    }


    for (j = 0; str2[j] != '\0'; j++, i++) {
        destino[i] = str2[j];
    }

    destino[i] = '\0';
}

int main() {
    char str1[50], str2[50], resultado[100];

    printf("Digite a primeira string: ");
    scanf("%49[^\n]", str1);

    printf("Digite a segunda string: ");
    scanf(" %49[^\n]", str2); 
    concatenarStrings(resultado, str1, str2);
    printf("String concatenada: %s\n", resultado);

    return 0;
}