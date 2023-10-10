#include<stdio.h>


int main(){

    float d;
    float fuel,speed;

    scanf("%f", &d);
    scanf("%f", &fuel);

    speed = d/fuel;

    printf("%.3f km/l\n", speed);
    //printf("%.3f km/l\n", d);
    //printf("%.3f km/l\n", fuel);
    return 0;
}