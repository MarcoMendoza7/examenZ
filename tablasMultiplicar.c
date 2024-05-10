#include <stdio.h>

void tablaMultiplicar(int numero, int multiplicador) {
    if (multiplicador > 10) {
        return; 
    }
    printf("%d * %d = %d\n", numero, multiplicador, numero * multiplicador);
    tablaMultiplicar(numero, multiplicador + 1);
}

void tablas(int numero) {
    if (numero > 100) {
        return; 
    }

    printf("Tabla de multiplicar del %d:\n", numero);
    tablaMultiplicar(numero, 1);
    printf("\n");
    tablas(numero + 1);
}

int main() {
    tablas(1); 
    return 0;
}
