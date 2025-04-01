#include <stdio.h> 

void linha(); 

 

int main() { 

    linha();  

    return 0; 

} 

void linha() { 

    for (int i = 0; i < 25; i++) { 

        printf("*"); 

    } 

    printf("\nCMP 1048\n"); 

    for (int i = 0; i < 25; i++) { 

        printf("*"); 

    } 

    printf("\nTécnicas de Programação\n"); 

    for (int i = 0; i < 25; i++) { 

        printf("*"); 

    } 

    printf("\n"); 

} 