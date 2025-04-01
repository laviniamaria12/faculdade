#include <stdio.h>


void to_upper_case(char *str) {
    while (*str) {
    
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char string[] = "HeLLo, WoRLd! 123 #C Programming";

    printf("String original: %s\n", string);
    to_upper_case(string);
    printf("String em maiúsculas: %s\n", string);

    return 0;
}