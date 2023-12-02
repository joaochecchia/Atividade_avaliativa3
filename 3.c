#include <stdio.h>
#include <string.h>

void segundafeira8(char p[]) {
    if (p[7] == '1' || p[7] == '0') {
        printf("%s nao pode circular segunda-feira\n", p);
    } else {
        printf("%s pode circular segunda-feira\n", p);
    }
}

void tercafeira8(char p[]) {
    if (p[7] == '3' || p[7] == '2') {
        printf("%s nao pode circular terca-feira\n", p);
    } else {
        printf("%s pode circular terca-feira\n", p);
    }
}

void quartafeira8(char p[]) {
    if (p[7] == '5' || p[7] == '4') {
        printf("%s nao pode circular quarta-feira\n", p);
    } else {
        printf("%s pode circular quarta-feira\n", p);
    }
}

void quintafeira8(char p[]) {
    if (p[7] == '7' || p[7] == '6') {
        printf("%s nao pode circular quinta-feira\n", p);
    } else {
        printf("%s pode circular quinta-feira\n", p);
    }
}

void sextafeira8(char p[]) {
    if (p[7] == '9' || p[7] == '8') {
        printf("%s nao pode circular sexta-feira\n", p);
    } else {
        printf("%s pode circular sexta-feira\n", p);
    }
}

void segundafeira7(char p[]) {
    if (p[6] == '0' || p[6] == '1') {
        printf("%s nao pode circular segunda-feira\n", p);
    } else {
        printf("%s pode circular segunda-feira\n", p);
    }
}

void tercafeira7(char p[]) {
    if (p[6] == '3' || p[6] == '2') {
        printf("%s nao pode circular terca-feira\n", p);
    } else {
        printf("%s pode circular terca-feira\n", p);
    }
}

void quartafeira7(char p[]) {
    if (p[6] == '4' || p[6] == '5') {
        printf("%s nao pode circular quarta-feira\n", p);
    } else {
        printf("%s pode circular quarta-feira\n", p);
    }
}

void quintafeira7(char p[]) {
    if (p[6] == '6'|| p[6] == '7') {
        printf("%s nao pode circular quinta-feira\n", p);
    } else {
        printf("%s pode circular quinta-feira\n", p);
    }
}

void sextafeira7(char p[]) {
    if (p[6] == '8' ||p[6] == '9') {
        printf("%s nao pode circular sexta-feira\n", p);
    } else {
        printf("%s pode circular sexta-feira\n", p);
    }
}

int main() {
    char p[9];
    char d[15];

    scanf("%s", p);
    scanf("%s", d);

    if (strlen(p) == 8 && p[3] == '-') {
        if (strcmp(d, "SEGUNDA-FEIRA") == 0) segundafeira8(p); 
         else if (strcmp(d, "TERCA-FEIRA") == 0) tercafeira8(p);
         else if (strcmp(d, "QUARTA-FEIRA") == 0) quartafeira8(p);
         else if (strcmp(d, "QUINTA-FEIRA") == 0) quintafeira8(p);
         else if (strcmp(d, "SEXTA-FEIRA") == 0) sextafeira8(p);
         else if (strcmp(d, "SABADO") == 0) printf("Nao ha proibicao no fim de semana\n");
         else if (strcmp(d, "DOMINGO") == 0) printf("Nao ha proibicao no fim de semana\n");
    }
    else if (strlen(p) == 7 && p[2] != '-') {
        if (strcmp(d, "SEGUNDA-FEIRA") == 0) segundafeira7(p); 
         else if (strcmp(d, "TERCA-FEIRA") == 0) tercafeira7(p);
         else if (strcmp(d, "QUARTA-FEIRA") == 0) quartafeira7(p);
         else if (strcmp(d, "QUINTA-FEIRA") == 0) quintafeira7(p);
         else if (strcmp(d, "SEXTA-FEIRA") == 0)  sextafeira7(p);
         else if (strcmp(d, "SABADO") == 0) printf("Nao ha proibicao no fim de semana\n");
         else if (strcmp(d, "DOMINGO") == 0) printf("Nao ha proibicao no fim de semana\n");
    } else printf("Placa invalida\n");
        
    if(strcmp(d, "SEGUNDA-FEIRA") != 0 && strcmp(d, "TERCA-FEIRA") != 0 
    && strcmp(d, "QUARTA-FEIRA") != 0 && strcmp(d, "QUINTA-FEIRA") != 0
    && strcmp(d, "SEXTA-FEIRA") != 0 && strcmp(d, "SABADO") != 0
    && strcmp(d, "DOMINGO") != 0) {
    printf("Dia da semana invalido\n");
}

    return 0;
}

