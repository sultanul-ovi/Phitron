#include <stdio.h>

int main(){
    int num;
    float count;
    scanf("%d %f", &num, &count);



    if(num == 1)
    {
        printf("Total: R$ %.2f\n",count*4);
    }
    else if(num == 2)
    {
        printf("Total: R$ %.2f\n",count*4.5);
    }
   else if(num == 3)
    {
        printf("Total: R$ %.2f\n",count*5);
    }
   else if(num == 4)
    {
        printf("Total: R$ %.2f\n",count*2);
    }
   else if(num == 5)
    {
        printf("Total: R$ %.2f\n",count*1.5);
    }
    


    return 0;
}