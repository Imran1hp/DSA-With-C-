#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *left , *right ;
  
};


struct node * create(){

    int x ;
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data (-1 for no data): ");
    scanf("%d",&x);
    if(x ==-1){
        return 0;

    }
    newnode->data =x;
    printf("\nEnter the left child of %d\n",x);
    newnode->left = create();
    printf("\nEnter the right child of %d\n",x);
    newnode ->right = create();
    return newnode; 
}


// Trees traversal preorder (Root , left , Right)

void preorder_traversal(struct node *root){

   if(root == NULL){
    return ;
   }
   printf("%d \t",root->data);
   preorder_traversal(root->left);
   preorder_traversal(root->right);
}


// trees traversal postorder (Left , Right , Root)

void postorder_traversal(struct node *root){
    if(root == NULL){
        return ;

    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d \t",root->data);


}


//  Trees Inorder traversal  (left , Root , Right) 

void inorder_traversal(struct node * root ){
if( root == NULL){
    return ;
}

inorder_traversal(root->left);
printf("%d \t"  , root->data);
inorder_traversal(root->right);

}



int main()
{

 struct node *root ;   
 root =  create();
int choice ;
  while(1){
  printf("\n 1 for perorder traversal");
  printf("\n 2 for inorder traversal");
  printf("\n 3 for postorder traversal");
  printf("\n 4 for exit");
  printf("Enter your choice: ");
  scanf("%d",&choice);


  switch (choice){

    case 1:
    preorder_traversal(root) ;
    break;

    case 2:
    inorder_traversal(root);
    break;

    case 3:
    postorder_traversal(root);
    break;

    case 4: exit(1);

  }


  }


 return 0;

}





