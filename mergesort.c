#include<stdio.h>
void mergesort(int[],int,int);
void merge(int[],int,int);
void main()
{
    int a[10]={10,9,7,101,23,44,12,78,34,23};
    int i;
    mergesort(a,0,9);
    printf("printing the sorted elements");
    for(i=0;i<10;i++)
    {
        printf("/n%d/n",a[i]);
    }
}
 void mergesort(int a[],int beg,int end)
 {
     int mid;
     if(beg<end)
     {
         mid = (beg+end)/2;
         mergesort(a,beg,mid);
         mergesort(a,mid+1,end);
         mergesort(a,beg,mid.end);
     }
 }
void mergesort(int a[],int beg,int mid,int end)
 { 
     int i=beg,j=mid+1,k,index=beg;
     int temp[10];
     while(i<=mid&&j<=end)
     {
         if(a[i]<a[j])
     {
         temp[index]=a[i];
         i=i+1;
     }
     else
     {
         temp[index]=a[j];
        j=j+1;
     }
        index++;
     }
     if(i>mid)
     {
         while(j<=end)
         {
             temp[index] = a[j]
             index++;
             j++;
         }
     }
     else
     {
       while(i<=mid)
       {
           temp[index]=a[j];
           index++;
           i++;
       }
       k=beg;
       while(k<index)
       {
           a[k]=temp[k];
           k++;
       
       }

    }
     
     