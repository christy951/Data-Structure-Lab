#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
   struct node* newnode(int data)
   {
       struct node* node = (struct node*)malloc(sizeof(struct node));
       node->data=data;
       node->left=NULL;
       node->right=NULL;
       return(node);

   }
int main()
{
struct node *root = newNode(1);
              1
      / /   NULL
     NULL
 */
root->left     = newNode(2);
root->right    =newNode(3);
get char();
return 0;
}    