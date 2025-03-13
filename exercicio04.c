#include <stdio.h>

void desenha_retangulo() {
    for (int i = 0; i < 5; i++) {  
        for (int j = 0; j < 20; j++) {  
            if (i == 0 || i == 4 || j == 0 || j == 19) {
                printf("M");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    desenha_retangulo();
    return 0;
}