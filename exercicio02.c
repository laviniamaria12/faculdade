#include <stdio.h> 

void linha2(char a); 

  

int main() { 

    linha2('#');  

    return 0; 

} 

void linha2(char a) { 

    for (int i = 0; i < 25; i++) { 

        printf("#"); 

    } 

    printf("\n"); 

} 