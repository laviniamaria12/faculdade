#include <stdio.h>
#include <math.h>

double base_log(double x, double y) {
    return log(x) / log(y);
}

int main(){
    double x, y;
    printf("Digite o logaritmando: ");
    scanf("%lf", &x);
    
    printf("Digite a base: ");
    scanf("%lf", &y);
    
if (x > 0 && y > 0 && y != 1) {
    double resultado = base_log(x, y);
    printf("Logaritmo de %.2f na base %.2f é: %.6f\n", x, y, resultado);
    } else {
    printf("Erro!\n");
    }



    return 0;
}
