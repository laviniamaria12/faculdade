#include <stdio.h>

void inverterCaso(char *str) {
    while (*str != '\0') { 
        if (*str >= 'A' && *str <= 'Z') { 
            *str = *str + 32; 
        } else if (*str >= 'a' && *str <= 'z') { 
            *str = *str - 32; 
        }
        str++; 
    }
}

int main() {
    char string[100];


    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    
    inverterCaso(string);

    printf("String modificada: %s", string);

    return 0;
}