#include <stdio.h>

struct fraccion{
    int den;
    int num;
};

int suma(struct fraccion suma1, struct fraccion suma2);
int division(struct fraccion divi1, struct fraccion divi2);

int suma(struct fraccion suma1, struct fraccion suma2){
    int num=(suma1.num*suma2.den) + (suma2.num*suma1.den);
    int den=(suma1.den*suma2.den);
    printf("SUMA: %d/%d\n", num,den);
}

int resta(struct fraccion suma1, struct fraccion suma2){
    int num=(suma1.num*suma2.den) - (suma2.num*suma1.den);
    int den=(suma1.den*suma2.den);
    printf("RESTA: %d/%d\n", num,den);
}

int division(struct fraccion divi1,struct fraccion divi2){
    int num=divi1.num*divi2.den;
    int den=divi1.den*divi2.num;
    printf("DIVISION: %d/%d\n", den, num);

}

int main(void){
    struct fraccion f1;
    struct fraccion f2;

    puts("PRIMERA FRACCION");
    puts("Numerador...");
    scanf("%d", &f1.num);
    puts("Denominador...");
    scanf("%d", &f1.den);

    puts("\nSEGUNDA FRACCION");
    puts("Numerador...");
    scanf("%d", &f2.num);
    puts("Denominador...");
    scanf("%d", &f2.den);
    printf("\n");

    suma(f1,f2);
    resta(f1,f2);
    division(f1,f2);
    return 0;
}