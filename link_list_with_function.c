#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node * next ;

};


struct node * insert_end(struct node * head)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }

    printf("Enter the value of the node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    return head;
}
struct node * display(struct node *head)
{
    struct node *search = head;

    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    while (search != NULL) {
        printf("%d \t", search->data);
        search = search->next;
    }
    printf("\n");

    return head;
}




int main(){

struct node * head  , *temp;
head = NULL ;

while(1){
  int choice ;
  printf("\n1 for  insert at the  beining ");
  printf("\n2 for  insert at the  end ");
  printf("\n3 for  insert at given location ");
  printf("\n4 for Dispaly");
  printf("\n5 for Exit");

  printf("\n Enter your choice: ");
  scanf("%d",&choice);

  switch(choice){
    case 2 :
     
     head = insert_end(head);
     break;

     case 4:

     display(head);
     break;

     case 5:
     exit(1);
}
    

}





return 0;

}