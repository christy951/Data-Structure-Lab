#include<stdio.h>
int main()
{
    int p;
    float R,n,SI;
    printf("enter 3 numbers");
    scanf("%d%f%f",&p,&R,&n);
    SI=(p*R*n)/100;
    printf("result is : %d",SI);
    return 0;
}