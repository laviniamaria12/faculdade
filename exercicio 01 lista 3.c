#include <stdio.h>
int caracter(char b) {
    if((b >= 'a' && b <= 'z') && !(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')) {
        return 1;
    }
    return 0;
}
int main()
{
    char b;
    printf("Digite uma letra:\n");
    scanf("%c", &b);
    if(caracter(b)) {
        printf("%c é uma consoante.\n", b);
    }else {
        printf("%c não é uma consoante.\n", b);
    }
    return 0;
}
