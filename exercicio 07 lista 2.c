#include <stdio.h>
#include <math.h>


    int verifica_primo(int numero) {
        if (numero < 2) {
            return 0;  
        } if (numero == 2 || numero == 3) {
            return 1;
        } if (numero % 2 == 0) {
            return 0;
        }
        for (int i = 3; i <= sqrt(numero); i += 2) {
          if (numero % i == 0) {
            return 0; 
        }
        }
        return 1;
    }
    int main() {
        int numero;
        
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        if (verifica_primo(numero)) {
            printf("É primo!!\n");
        } else {
            printf("Não é primo!!\n");
        }


    return 0;
}
