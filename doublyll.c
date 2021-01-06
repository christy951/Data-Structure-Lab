#include<stdio.h>
include<stdlib.h>
{
    struct node *head;
    void insert_beginning();
    void insert_last();
    void insert_specified();
    void delete_beginning();
    void delete_last();
    void delete_specified();
    void display();
    void main();

}
   int choice =0;
   while(1)
   {
        printf("/nDoubly linked list operations:/n");
        printf("/n 1.Insert at beginning/n 2.Insert at last/n 3.Insert at specific position/n 4.Delete from Beginning/n 5.Delete/n 6.Delete the node after the given data/n 7.Display/n 8.Exit/n");
        printf(/nEnter your choice:/n");
        scanf("/n%d",&choice);
        switch(choice)
        {
            case 1:
               insert_beginning();
                 break;
                 case 2:
                   insert_last();
                   break;
                   case 3:
                   insert_specified();
                   break;
                   case 4:
                   delete_beginning();
                   break;
                   case 5:
                   delete_last();
                   break;
                   case 6:
                   delete_specified();
                   break;
                   case 7:
                   display();
                   break;
                   case 8;
                   exit(0);
                   break;
                   default:
                        printf("/n wrong choice/n");
        }
   }
                         

        }

   void insert_beginning()
   {
     
     struct node *ptr;
     int item;
       ptr = (struct node *)malloc(sizeof(struct node));
       if(ptr == NULL)
       {
           printf("/nOVERFLOW");

       }
       else
       {
           printf("/nEnter Item value:/n");
           scanf("%d",&item);
           if(head==NULL)
           {
               ptr->next = NULL;
               ptr->prev=NULL;
               ptr->data=item;
               head=ptr;

           }
           else{
               ptr->data=iteam;
               ptr->prev=NULL;
               ptr->next=head;
               head->prev=ptr;
               head=ptr;
           }
              printf("/nNode inserted/n");
       }
   }
   void insert_last()
   {
      struct node *ptr,*temp;
       int item;
       ptr = (struct node *)
       malloc(sizeof(struct node));
       if(ptr == NULL)
       {
           printf("/noverflow");

       }
       else{
           printf("/nEnter value");
           scanf("%d",&item);
           ptr->data=item;
           if(head == NULL)
          {
              ptr->next = NULL;
              ptr->prev = NULL;
              head = ptr;
          }
            else{
                temp = head;
                while(temp->next!=NULL)
                {
                    temp = head;
                    while(temp->next!=NULL)
                    {
                        temp = temp->next;
                    }
                    temp->next = ptr;
                    ptr->prev = temp;
                    ptr->next = NULL;
                }
                printf("/n node inserted/n");
            }
            void insert_specified()
            {
                struct node *ptr,*temp;
                int item,loc,i;
                ptr = (struct node*)malloc(sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("/n OVERFLOW");
                }
                else{
                    temp=head;
                    printf("Enter the location");
                    scanf("%d",&loc):;
                    for(i=0;i<loc;i++)
                    {
                        temp = temp->next;
                        if(temp == NULL)
                    {
                        printf("/n There are less than %d elements", loc);
                        return;
                    }
                    }
                printf("/nEnter value/n");
                scanf("%d",&item);
                ptr->data = item;
                ptr->next = temp->next;
                ptr->prev = temp;
                temp->next = ptr;
                temp->next->prev=ptr;
                printf("/n Node inserted/n");
                }
            }
            void delete_beginning()
            {
                struct node*ptr;
                if(head == NULL)
                {
                    printf("/n Underflow/n");
                }
                else if(head->next == NULL)
                {
                    head = NULL;
                    free(head);
                    printf("/n Node deleted/n";
                }
            }
            void delete_last()
            {
                struct node *ptr;
                if(head == NULL)
                {
                    printf("/n Underflow/n");
                }
                else if(head->next == NULL)
                {
                    head = NULL;
                    free(head);
                    printf("/n Node deleted/n");
                }
                else{
                    ptr = head;
                    if(ptr->next != NULL)
                    {
                        ptr = ptr -> next;
                    }
                    ptr -> prev -> next = NULL;
                    free(ptr);
                    printf("/n Node deleted/n");
                }
            }
            void delete_specified()
            {
                struct node *ptr, *temp;
                int val;
                printf("/n Enter the data after which the node is to be deleted 
                :")
                scanf("%d", &val);
                ptr = head;
                while(ptr -> data !=val)
                ptr = ptr -> next;
                if(ptr -> next == NULL)
                {
                    printf("/nCan't delete/n");
                }
                else if(ptr -> next -> next == NULL){
                    ptr ->next = NULL;
                }
                else
                {
                    temp = ptr -> next;
                    ptr -> next = temp -> next;
                    temp -> next -> prev = ptr;
                    free(temp);
                    printf(/n node deleted/n");
                }
            }
            void display(
                {
                    struct node *ptr;
                    printf("/n printing values..../n")
                    ptr = head;
                    while(ptr != NULL)
                    {
                        printf("%d/n",ptr->data);
                        ptr=ptr->next;

                    }
                }
