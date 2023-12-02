#include <stdio.h>

int main() {
    int t;
    double A, i, M;
    
    scanf("%d", &t);

    scanf("%lf", &A);

    scanf("%lf", &i);

    double fator = 1.0 + i;

    for (int periodo = 1; periodo <= t; periodo++) {
        double termo_potencia = 1.0;
        
        for (int j = 1; j <= periodo; j++) {
            termo_potencia *= fator;
        }

        M = A * fator * ((termo_potencia - 1) / i);
        printf("Montante ao fim do mes %d: %.2lf\n", periodo, M);
    }

    return 0;
}


