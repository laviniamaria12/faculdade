#include <stdio.h>


void mes(int numero) {
    char meses[12][10] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    

if (numero >= 1 && numero <= 12) {
    printf("MÊS: %s\n", meses[numero - 1]);
} else {
    printf("ERRO!");
}
}
int main() {
    int numero;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numero);

    mes(numero);

    return 0;
}
