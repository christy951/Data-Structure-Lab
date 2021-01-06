#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct Node
{
    int data;
    struct Node *link;
}*header,*newnode,*firstnode,*ptr,*insertnode,*insertenode,*insertnodeany;
void main()
{
    void create();
    void traverse();
    void insertfront();
    void insertend();
    void insertany;
    int ch;
    clrscr;
    create;
    traverse;
    do
    {
        printf("/nchoice: /n");
        printf("/n1.insertion at front/n2.insertion at end/n3.insertion at any position/n4.exit/n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertfront();
            traverse();
            break;
            case 2:insertend();
            traverse();
            break;
            case 3:insertany();
            traverse();
            break;
            case 4:exit(0);
            default:printf("invalid choice");
            break;

        }}
        while(ch!=4)
        getch();
}
void create()
{
    if(header=='/0')
    {
        firstnode=(struct Node*)malloc(sizeof(structNode));
        printf("enter data");
        scanf("%d",&newnode->data);
        if(newnode->data==0)
        {
            break;
        }
        newnode->link='/0'
        ptr->link=newnode;
        ptr=newnode;
    }
}
void traverse()
{
    ptr=header;
    printf("/n The linked list is/n");
    printf("/n data address link/n");
    while(ptr!='/0')
    {
        printf("/n %d",ptr->data);
        printf("/t %u",&ptr->data);
        printf("/t %u",ptr->link);
        ptr=ptr->link;
    }
}
void insertfront()
{
    int data;
    insertfnode=(struct Node*)malloc(size of(struct Node));
    printf("/n/n insertion atfront /n");
    printf("enter data/n");
    scanf("%d",&data);
    insertfnode->link=header;
    insertfnode->data=data;
    header=inserfnode;
}
  void insertend()
  {
      int m;
      insertnode=(struct NODE*)MALLOC(sizeof(struct Node));
      printf("enter data/n");
      scanf("%d",&m);
      ptr=header;
      while(ptr->link!='/0')
      {
          ptr=ptr->link;
      }
      ptr->link=insertnode;
      insertenode->data=m;
      insertenode->link='/0';
  }
  void insertany()
  {
      int y,key;
      insertnodeany=(struct NODE*)malloc(sizeof(struct NODE));
      printf("/n insertion at any position");
      if(insertnodeany=='/0')
      {
          printf("/nmemory overflow");
      }
      else
      {
          ptr=header;
          printf("enter the data and key/n");
          scanf("%d%d",&,&key);
          while((ptr->data!=key)&&(ptr->link!='/0'))
          {
              ptr=ptr->link;
          }
          if(ptr->link=="/0')
          {
              printf("/nkey not found/n");
          }
          else{
              insertnodeany->link=ptr->link;
              insertnodeany->data=y;
              ptr->link=insertnodeany;
          }
          }
          }
      
