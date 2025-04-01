#include <stdio.h>

int stringInt(const char *str) {
    int resultado = 0;
    int i = 0;
    
   
    while (str[i] >= '0' && str[i] <= '9') {
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }
    
    return resultado;
}

int main() {
    char str[20];
    
    printf("Número: ");
    scanf("%s", str);
    
    int numero = stringInt(str);
    printf("Convertido: %d\n", numero);
    
    return 0;
}
