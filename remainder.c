#include<stdio.h>
int main()
{
    int seen[10] = {0};
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    int rem,ifseen;
    while(N>0)
    {
        rem = N%10;
        ifseen[rem] == 1;
        break;
        seen[rem] = 1;
        N = N/10;
    }
    if(N>0)
    printf("yes");
    else
    printf("no");
    return 0;
}