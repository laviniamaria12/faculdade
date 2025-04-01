#include <stdio.h>


void NumeroPerfeito(int num) {
    int soma = 0;
    printf("%d =", num);
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
            printf(" %d", i);
            if (i < num / 2) {
                printf(" +");
            }
        }
    }
    
    if (soma == num) {
        printf("\n");
    } else {
        printf(" (não é perfeito)\n");
    }
}

int main() {
    printf("Números perfeitos entre 1 e 10000:\n");
    
    for (int i = 1; i <= 10000; i++) {
        int soma = 0;
        
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                soma += j;
            }
        }
        
        if (soma == i) {
            NumeroPerfeito(i);
        }
    }

    return 0;
}