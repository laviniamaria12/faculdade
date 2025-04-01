#include <stdio.h>


long long combinacao(int n, int p) {
    long long num = 1, den = 1;

    
    for (int i = 0; i < p; i++) {
        num *= (n - i);
        den *= (i + 1);
    }

    return num / den;
}

int main() {
    int n, p;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);

    if (p > n || n < 0 || p < 0) {
        printf("Valores inválidos!\n");
    } else {
        printf("C(%d, %d) = %lld\n", n, p, combinacao(n, p));
    }

    return 0;
}