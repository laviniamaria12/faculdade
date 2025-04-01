#include <stdio.h>

long long fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
}
    return numero * fatorial(numero - 1); 
}

int main()
{
    int numero;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro\n");
    } else {
        printf("Fatorial de %d = %lld\n", numero, fatorial(numero));
        
    }

    return 0;
}
    
