#include <stdio.h>

void desenha_retangulo_preenchido(char a) {
    for (int i = 0; i < 5; i++) {  
        for (int j = 0; j < 15; j++) {  
            if (i == 0 || i == 4 || j == 0 || j == 14) {
                printf("#");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

int main() {
    desenha_retangulo_preenchido('#');
    return 0;
}