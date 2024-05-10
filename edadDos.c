#include <stdio.h>

int main (){
    int dia;
    int mes;
    int anio;
    int diaaa = 9;
    int messs = 5;
    int aniooo = 2024;
    int d;
    int m;
    int a;

    puts("INGRESE SU EDAD COMO SE SOLICITA");
    puts("Dia...");
    scanf("%d", &dia);
    puts("Mes...");
    scanf("%d", &mes);
    puts("Año...");
    scanf("%d", &anio);

    d = dia - diaaa;
    m = mes - messs;
    a = anio - aniooo;

    printf("TU edad es: %d / %d / %d", d, m, a);
}