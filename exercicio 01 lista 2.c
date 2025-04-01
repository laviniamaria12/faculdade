#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double raio, area;
    
    printf("Digite o valor do raio:\n");
    scanf("%lf", &raio);
    area = pi * (raio * raio);
    printf("Valor da área: %.2lf", area);

    return 0;
}
