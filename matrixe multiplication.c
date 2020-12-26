#include<stdio.h>
int main()
{
    int m,n,p,q,c,d,k,sum=0;
    int first[10][10],second[10][10],multiply[10][10];
    printf("enter the number of rows and columns of first matrix/n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of first matrixe");
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d",&first[c][d]);
    printf("enter the number of rows and columns of second matrixe/n");
    scanf("%d%d",&p,&q);
    if(n!=p)
  printf("matrixes with entered orders can't be multiplied with each others/n");
  else{
       printf("enter the elements of second matrixe/n");
     for(c=0;c<p;c++)
    for(d=0;d<q;d++)
    scanf("%d",&second[c][d]);
    for(c=0;c<m;c++)
{
   for(d=0;d<q;d++)
{
   for(k=0;k<p;k++)
{
    sum=sum+first[c][k]*second[k][d];
}
    multiply[c][d]=sum;
    sum=0;
}
}
    printf("product of entered matrixe:/n");
    for(c=0;c<m;c++)
{
    for(d=0;d<q;d++)
{
   printf("%d/t",multiply[c][d]);
printf("/n");
}
}
return 0;
    
}