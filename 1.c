#include <stdio.h>
#include <string.h>

int conversaor(char romano[]) {
    int decimal[strlen(romano)];
    int soma = 0;

    for (int i = 0; i < strlen(romano); i++) {
        if (romano[i] == 'I') decimal[i] = 1;
        else if (romano[i] == 'V') decimal[i] = 5;
        else if (romano[i] == 'X') decimal[i] = 10;
        else if (romano[i] == 'L') decimal[i] = 50;
        else if (romano[i] == 'C') decimal[i] = 100;
        else if (romano[i] == 'D') decimal[i] = 500;
        else if (romano[i] == 'M') decimal[i] = 1000;
    }

    for (int i = 0; i < strlen(romano); i++) {
        if (i > 0 && decimal[i - 1] < decimal[i]) {
            soma += decimal[i] - 2 * decimal[i - 1];
        } else {
            soma += decimal[i];
        }
    }

    return soma;
}

void conversaob(int decimal) {

    int binario[32];
    int indice = 0;

    while (decimal > 0) {
        binario[indice] = decimal % 2;
        decimal = decimal / 2;
        indice++;
    }

    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");
}

int main() {
    char romano[15];
    int decimal;

    scanf("%s", romano);

    decimal = conversaor(romano);
    
    printf("%s na base 2: ", romano);
    conversaob(decimal);
    printf("%s na base 10: %d\n",romano, decimal);
    printf("%s na base 16: %x\n", romano, decimal);

    return 0;
}




