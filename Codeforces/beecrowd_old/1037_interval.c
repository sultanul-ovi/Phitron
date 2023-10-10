#include <stdio.h>

int main(){
    float num;
    scanf("%f", &num);



    if(num>100 || num <0)
    {
        printf("Fora de intervalo\n");
    }
    else if(num>75)
    {
        printf("Intervalo (75,100]\n");
    }
    else if(num>50)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(num>25)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(num>=0)
    {
        printf("Intervalo [0,25]\n");
    }
    


    return 0;
}