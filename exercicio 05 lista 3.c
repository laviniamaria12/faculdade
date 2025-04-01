#include <stdio.h>


void to_lower_case(char *str) {
    while (*str) {
        
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char string[] = "HeLLo, WoRLd! 123 #C Programming";

    printf("String original: %s\n", string);
    to_lower_case(string);
    printf("String em minúsculas: %s\n", string);

    return 0;
}