#include <stdio.h>

#define PI 3.14159  

void volume(double raio) {
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    printf("Volume = %.2lf\n", volume);
}

int main() {
    double raio;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    volume(raio);

    return 0;
}
