#include<stdio.h>
void swap(int *x, int *y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;  
}
   int main ()
   {
       int num1=5,num2=10;
       printf("before swapping: num1 is: %d,num2 is: %d/n",num1,num2);
       swap(&num1,&num2);
       printf("after swapping num1 is: %d,num2 is: %d/n,num1,num2");
       return 0;
   }