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

    printf("\n"); 

} 