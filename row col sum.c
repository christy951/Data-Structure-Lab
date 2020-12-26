#include<stdio.h>
#define size 5
int main()
{
    int A[size][size];
    int row,col,sum;
    printf("Enter elements in matrix of size %d*%d:/n",size,size);
    for(row=0;rowK<size;row++)
    {
        for(col=0;col<size;col++){
            scanf("%d",A[row][col]);
        }
    }
    for(row=0;row<size;row++){
        sum=0;
        for(col=0;col<size;col++){
            sum+=A[row][col];
        }
        printf("sum of elements of row %d = %d/n",row+1,sum);
    }
      for(row=0;row<size;row++){
          sum=0;
          for(col=0;col<size;col++){
              sum+=A[col][row];
          }
          printf("sum of elements of column %d = %d/n",row+1,sum);
      }
         return 0;
}