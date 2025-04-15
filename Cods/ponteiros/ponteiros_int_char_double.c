#include <stdio.h>

int main()
{
    long int     x;
    double     y;
    char     z;
    long int     *pontX;
    double  *pontY;
    char    *pontZ;

    x = 10;
    y = 20.50;
    z = 'a';
    pontX = &x;
    pontY = &y;
    pontZ = &z;

    printf("Variavel 'x'. Ether: %p\n", pontX);
    printf("Valor da Variavel apontada: %ld\n", *pontX);

    printf("Variavel 'x'. Ether: %p\n", pontY);
    printf("Valor da Variavel apontada: %.2f\n", *pontY);

    printf("Variavel 'x'. Ether: %p\n", pontZ);
    printf("Valor da Variavel apontada: %c\n", *pontZ);   
}