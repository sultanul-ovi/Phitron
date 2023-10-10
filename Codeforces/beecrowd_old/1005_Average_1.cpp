#include<iostream>

using namespace std;

int main(){

    float a, b,avg;
    scanf("%f", &a);
    scanf("%f", &b);
    avg = (a*3.5+b*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f\n", avg);
    return 0;
}