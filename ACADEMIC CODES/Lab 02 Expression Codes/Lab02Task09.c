///Take a batsman’s run and faced balls in a match. Calculate his strike rate.
#include<stdio.h>
void main()
{
    int ball, run;
    float strike_rate;
    printf("Enter the ball and run:");
    scanf("%d %d",&ball,&run);
//typecasting (implicit explicit)
    strike_rate = ((float)run/ball)*100;
    printf("Strike rate: %.2f",strike_rate);
}
