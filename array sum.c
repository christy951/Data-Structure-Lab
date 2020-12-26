#include<stdio.h>
int main()
{
    int limit,i,values[100],sum=0;
    printf("enter limit");
    scanf("%d",&limit);
    printf("enter values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+values[i];
    }
    printf("%d",sum);
}