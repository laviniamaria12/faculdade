#include <stdio.h>
#include <string.h>

void caixa_com_texto_centralizado(const char *S, int N, char C) {
    int len = strlen(S);
    if (N < 2) {
        printf("A largura deve ser maior ou igual a 2.\n");
        return;
    }
    
    for (int i = 0; i < N; i++) {
        printf("%c", C);
    }
    printf("\n");
    
    if (len >= N - 2) {

        printf("%c", C);
        for (int i = 0; i < N - 2; i++) {
            printf("%c", S[i]);
        }
        printf("%c\n", C);
    } else {
        int espacos = N - 2 - len;
        int espacos_esq = espacos / 2;
        int espacos_dir = espacos - espacos_esq;
        
        printf("%c", C);
        for (int i = 0; i < espacos_esq; i++) printf(" ");
        printf("%s", S);
        for (int i = 0; i < espacos_dir; i++) printf(" ");
        printf("%c\n", C);
    }
    
    for (int i = 0; i < N; i++) {
        printf("%c", C);
    }
    printf("\n");
}

int main() {
    caixa_com_texto_centralizado("Ola Mundo!", 30, '+');
    caixa_com_texto_centralizado("Ola Mundo!", 29, '+');
    caixa_com_texto_centralizado("Ola Mundo!", 10, '+');
    return 0;
}
