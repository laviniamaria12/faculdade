
#include <stdio.h>

int contarCaracteres(const char *str) {
    int contador = 0;
    while (str[contador]) contador++;
    return contador;
}

int main() {
    char string[100];
    
    printf("Digite uma string: ");
    scanf("%99[^
]", string);
    
    printf("Quantidade de caracteres: %d\n", contarCaracteres(string));
    return 0;
}
