#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *soma_numeros_gigantes(const char *num1, const char *num2) {
    int tam1 = strlen(num1);
    int tam2 = strlen(num2);
    int tamMax = (tam1 > tam2 ? tam1 : tam2) + 1;
    
    char *resultado = (char *)malloc((tamMax + 1) * sizeof(char));
    int i = tam1 - 1, j = tam2 - 1, k = tamMax - 1, carry = 0;
    
    resultado[tamMax] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int digito1 = (i >= 0) ? num1[i] - '0' : 0;
        int digito2 = (j >= 0) ? num2[j] - '0' : 0;
        int soma = digito1 + digito2 + carry;
        
        resultado[k] = (soma % 10) + '0';
        carry = soma / 10;
        
        i--; j--; k--;
    }
    
    return resultado + k + 1;
}

int main() {
    char numero1[100], numero2[100];

    printf("Digite o primeiro número: ");
    scanf("%s", numero1);

    printf("Digite o segundo número: ");
    scanf("%s", numero2);

    char *soma = soma_numeros_gigantes(numero1, numero2);
    
    printf("Resultado da soma: %s\n", soma);

    return 0;
}