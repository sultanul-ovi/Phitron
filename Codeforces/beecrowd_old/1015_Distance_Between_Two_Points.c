#include<stdio.h>
#include<math.h>


int main(){

    float x1,x2,y1,y2,dis;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4f\n", dis);
    return 0;
}