#include<stdio.h>
#include<stdlib.h>
typedef struct node
    {
        int data;
        struct node *left;
        struct node *right;
    }
    node;
    int count=1;
    node *insert(node *tree,int digit){
        if(tree==NULL){
            tree=(node *)malloc(sizeof(node));
            tree->left=tree->right=NULL;
            tree->data=digits;
            count++;
        }
        else if(count%2==0)
        tree->left=insert(tree->left,digit);
        else
            tree->right=insert(tree->right,digits);
            return tree;

void pre-order(struct treenode *tree)
{
    if(tree != NULL){
        printf("%d",tree->root);
        pre-order(tree->left);
        pre-order(tree->right);
    }
    void in-order(struct treenode*tree){
        if(tree != NULL){
            in-order(tree->left);
            printf("%d",tree->root);
            in-order(tree->right);

        }
    }
    void post-order(struct treenode*tree)
    {
        if(tree!=NULL)
        {
            post-order(tree->left);
            post-order(tree->right);
            printf("%d",tree->root);
        }
    }
    main()
    {
        node *root = NULL;
        int digit;
        puts("enter integer:To quit enter 0");
        scanf("%d",&digit;
        while(digit != 0){
            root=insert(root,digit);
            scanf("%d",&digit)
        }
        printf("/nThe preorder traversal of tree is:/n");
        preorder(root);
        printf("/nThe inorder traversal of tree is:/n");
        inorder(root);
        printf("/nThe postorder traversal of tree is:/n");
        postorder(root);
    }

