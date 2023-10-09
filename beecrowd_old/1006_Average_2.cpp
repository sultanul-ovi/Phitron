#include<iostream>

using namespace std;

int main(){

    float a, b,c,avg;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    avg = (a*2+b*3+c*5)/(2+3+5);
    printf("MEDIA = %.1f\n", avg);
    return 0;
}