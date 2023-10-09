#include<iostream>

using namespace std;

int main(){

    int c1,c2,n1,n2;
    float p1,p2, total_price;

    scanf("%d %d %f", &c1, &n1, &p1);
    scanf("%d %d %f", &c2, &n2, &p2);

    total_price = (n1*p1)+(n2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);
    return 0;
}