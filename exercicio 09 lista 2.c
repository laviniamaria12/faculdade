#include <stdio.h>

int verifica_regular(int numero) {
    if(numero <= 0) {
        return 1;
}   if(numero % 2 == 0) {
    numero /= 2;
}   if(numero % 3 == 0) {
    numero /= 3; 
}   if(numero % 5 == 0) {
    numero /= 5;
}  

    if (numero == 1) {
        return 1;
}   else {
        return 0;
}

int main()
{
    int numero;
    printf("Digite um número:\n");
    scanf("%d", &numero);
    
    if(verifica_regular(numero)) {
        printf("É regular!!\n");
    } else {
        printf("Não é regular.\n");
    }

    return 0;
}
