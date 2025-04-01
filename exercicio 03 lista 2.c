#include <stdio.h>


void media(double n1, double n2, double n3) {
    double media = (n1 + n2 + n3)/3.0;
    printf("Media = %.2lf\n", media);
}

int main() {
    double n1, n2, n3;

    printf("Digite o valores das 3 notas: ");
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    media(n1, n2, n3);

    return 0;
}
