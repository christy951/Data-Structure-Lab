#include<stdio.h>
int main()
{
    float a,b,c,average;
    printf("enter 3 number");
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("average is:%f",average);
    return 0;
}