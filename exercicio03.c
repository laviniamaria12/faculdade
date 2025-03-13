#include <stdio.h> 

void desenha_retangulo_solido(int linhas, int colunas); 

int main() { 

desenha_retangulo_solido(5, 20);  
return 0; 
  

} 

void desenha_retangulo_solido(linhas, colunas) { 

 for (int i = 0; i < linhas; i++) {  

for(int j = 0; j < colunas; j++){  

printf("M"); 

 } 

 printf("\n"); 

 } 

} 