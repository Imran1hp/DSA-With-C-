#include <stdio.h>
#include <stdlib.h>


struct node{
  int data ;
  struct node *pre;
  struct node *next;
};



struct node *insert_end(struct node *head){

  struct node *temp ,*newnode ; 
  
  newnode = (struct node*) malloc(sizeof(struct node));
  printf("Enter the value: ");
  scanf("%d",&newnode->data);
  if(head == NULL){
    head = temp = newnode;
  }
 else{
   
    temp->next = newnode ;
    newnode ->pre = temp;
    newnode -> next = NULL;
    temp = newnode;
 }

  if( head == NULL){
  }
    return head ;
}









int main(){
struct node *head;
head=NULL;
while(1)




    return 0 ;
}