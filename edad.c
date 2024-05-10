#include <stdio.h>

struct fecha {
    int dia;
    int mes;
    int anio;
};

void calcularEdad(struct fecha nacimiento, struct fecha actual, int *anios, int *meses, int *dias) {
    *dias = actual.dia - nacimiento.dia;
    *meses = actual.mes - nacimiento.mes;
    *anios = actual.anio - nacimiento.anio;

    if (*dias < 0) {
        (*meses)--;
        *dias += 30; 
    }

    if (*meses < 0) {
        (*anios)--;
        *meses += 12;
    }
}

int main() {
    struct fecha nacimiento = {29, 10, 2004};
    struct fecha actual = {9, 5, 2024};
    int anios;
    int meses;
    int dias;
    calcularEdad(nacimiento, actual, &anios, &meses, &dias);
    printf("Edad: %d años, %d meses, %d días\n", anios, meses, dias);
    return 0;
}
