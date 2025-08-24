#include <stdio.h>
#include <math.h>

int main(){

    float a=3, b=4.5, c=16, d=2.7, e=5, f=25.2, g=2.4, h=6, rezult;
    rezult = ((log(sqrt((a*a)+(b*b)))+sqrt(c*d))/(e*sqrt(f)))-(log(g+h));
    printf("Result of the equation: %f", rezult);

    return 0;
}

