/*
Температура за формулою F = (C * 9/5) + 32
*/

#include <stdio.h>

int main(){

    float t; // float бо часто не цілі значення виходять
    printf("Enter temperature in Celsius:\n");
    scanf("%f", &t);
    printf("temperature in Fahrenheit: %f", (t*1.8)+32);

    return 0;
}