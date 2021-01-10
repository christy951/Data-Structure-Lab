#iclude<stdio.h>
#define N 5;
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("overflow");

    }
    else{
        top++;
        stack[top] = x;
    }
    void pop()
    {
        int item;
        if(top==-1)
        {
            printf("underflow");
        }
        else{
            item=stack[top];
            top--;
            printf("%d", item);
        }
        void peak
        {
            if(top==-1)
            {
                printf("stack is empty");
            }
            else{
                printf("%d", stack[top]);
            }
        void display()
        int i;
        for(i=top; i<0; i--)
        {
            printf("%d", stack[i]);
        }
        }
    }
}
}
