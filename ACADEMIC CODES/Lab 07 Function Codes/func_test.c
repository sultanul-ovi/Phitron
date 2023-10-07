#include<stdio.h>
#include<stdbool.h>
#include<math.h>
/**

100
n = 100
n/2 = 50
sqrt(n) = 10

*/
void prime_check(){

    int n;
    bool flag = true;
    scanf("%d",&n);

    for(int i = 3;i<= sqrt(n);i=i+2)
    {
        if(n%i==0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        printf("%d is a Prime Number.\n",n);
    else
        printf("%d is not a Prime Number.\n",n);
}
int main()
{
    prime_check();
    return 0;
}
