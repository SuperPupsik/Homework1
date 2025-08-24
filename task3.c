/*
Дискримінант шукаеться і з цілих і нецілих і від'ємних і не від'ємних
*/

#include <stdio.h>

int main(){

    float a, b, c, D;
    printf("Enter coefficients of equation:\n");
    scanf("%f %f %f", &a, &b, &c);
    D = (b*b)-(4*a*c);
    printf("Rezult: \n");
    printf("%f", D);

    return 0;
}