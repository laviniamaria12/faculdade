#include <stdio.h>
#include <string.h>

int Palindromo(char A[]) {
    int i, tam = strlen(A);
    for (i = 0; i < tam / 2; i++) {
        if (A[i] != A[tam - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    scanf("%s", texto);
    
    if (Palindromo(texto)) {
        printf("O texto é um palíndromo.\n");
    } else {
        printf("O texto não é um palíndromo.\n");
    }
    
    return 0;
}
