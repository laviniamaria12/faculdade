#include <stdio.h>

    int fibonacci(int i) {
        if (i == 0) {
            return 0;
        } if (i == 1) {
            return 1;
        }
        
        int primeiro = 0;
        int segundo = 1;
        int proximo;
        
       for (int j = 2; j <= i; j++) {
        proximo = primeiro + segundo; 
        primeiro = segundo;  
        segundo = proximo;  
    }
       return segundo;
    }
    
    int main() {
    int i;

    printf("Digite o índice do termo da série de Fibonacci: ");
    scanf("%d", &i);

    if (i < 0) {
        printf("O índice deve ser um número inteiro não negativo.\n");
    } else {
        printf("O %dº termo da série de Fibonacci é: %d\n", i, fibonacci(i));
    }

    return 0;
}
