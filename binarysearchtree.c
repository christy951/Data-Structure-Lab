#include<stdio.h>
#include<stdlib>
struct node{
    struct node *left;
    struct node *right;
};
struct node *root;
struct node* newnode(value){
      struct node *newnode=malloc(sizeof(struct node));
       newNode->data=value;
       newnode->left=NULL;
       newnode->right=NULL;
       return newnode;
}
struct node* insert(struct node* root,int value);{
    if(root == NULL){
        return newnode(value)
    }
    else if(value==root->data)
          printf("same data can't be stored");
}
  else if(value<root->data){
      root->left=insert(root->left,value);
  }
  else if(value>root->data){
      root->right=insert(root->right,value);
  }
  }
  void inorderTraversal(struct node* root){
      if(root == NULL)return;
      inorderTraversal(root->left);
      printf("%d->",root->data);
      inorderTraversal(root->right);
  }
  void preorderTraversal(struct node* root){
      if(root == NULL)return;
      printf("%d-:>",root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
  }
  void postorderTraversal(struct node* root){
      if(root == NULL)return;
      postorderTraversal(root->left);
      postorderTraversal(root->right);
      printf("%d->",root->data);
  }
     struct node* search(struct node* root, int key){
         if(root==NULL)
           printf("/nnot found/n");
           else if(root->data==key)
           printf("/nfound/n");
           else{
                if(root->data<key)
                return search(root->right,key);
                return search(root->left,key);
           }
     }
     int main(){
           int opt;
           int value,searchv;
           do{
               printf("/n1)create root node /n2)insert node/n3search/n");
               printf("/n4)inorderTraversal/n5)preorderTraversal/n6postorderTraversal/n8quiet/n");
               printf("choose option::")
               scanf("%d",&opt);
               switch(opt){
                   case 1:
                         printf("/nEnter a number : ");
                         scanf("%d",&value);
                         root=newnode(value);
                         break;
                  case 2:
                         printf("/nEnter a number : ");
                         scanf("%d,&value");
                         insert(root,value);
                         break;
               
                 case 3:
                       printf("/nEnter a number : ")
                       scanf("%d",&searchv);
                       search(root,searchv);
                       break;
                case 4:
                        printf("/n.........................................../n");
                        inorderTraversal(root);
                        printf("/n.........................................../n");
                case 5:
                      printf("/n............................................../n");
                       preorderTraversal(root);
                       printf("/n............................................../n");
                case 6:
                       printf("/n................................................/n");
                       postorderTraversal(root);
                       printf("/n................................................/n");
                default:
                       printf("invalid option");
               }
           }
           while(opt!=8)
           return 0;
     }



           }
     }