#include <stdio.h>
#include <ctype.h>

int VogalMinuscula(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    if (VogalMinuscula(c)) {
        printf("%c é uma vogal minúscula.\n", c);
    } else {
        printf("%c não é uma vogal minúscula.\n", c);
    }
    
    return 0;
}
