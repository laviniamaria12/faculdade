#include <stdio.h>
#include <string.h>

void retire(char *str) {
    int i = 0, j = strlen(str) - 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
        i++;
    }

    while (j > i && (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')) {
        j--;
    }

    int k;
    for (k = 0; k <= j - i; k++) {
        str[k] = str[i + k];
    }
    str[k] = '\0';
}

int main() {
    char str[100];
    printf("string: ");
    fgets(str, sizeof(str), stdin);
    
    retire(str);
    printf("alterada: \"%s\"\n", str);
    
    return 0;
}
