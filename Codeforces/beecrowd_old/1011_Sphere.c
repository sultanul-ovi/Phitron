#include<stdio.h>
#define con 4.0/3
#define pi 3.14159

int main(){

    double r,vol;
    scanf("%lf", &r);

    vol = (con*pi*r*r*r);

    printf("VOLUME = %.3lf\n", vol);
    return 0;
}