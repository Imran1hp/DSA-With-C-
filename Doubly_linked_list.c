#include <stdio.h>
#include <stdlib.h>


struct node{
  int data ;
  struct node *pre;
  struct node *next;
};

struct node *head =NULL,*tail = NULL;


//  Insert at the begining

void *insert_begining(){
 struct node *newnode ;

 newnode = (struct node*)malloc(sizeof(struct node));
 printf("Enter the value: ");
 scanf("%d" , &newnode->data);
 newnode->pre = NULL;
 newnode->next = NULL;

 if (head == NULL)
 { 
   head = tail = newnode;
 }
 else{
 
  newnode->next = head;
  head -> pre = newnode ;
  head = newnode;
 }

}



// Insert at the End 
void insert_end(){

  struct node *newnode ; 
  
  newnode = (struct node*) malloc(sizeof(struct node));
  printf("Enter the value: ");
  scanf("%d",&newnode->data);
  newnode->pre = NULL;
  newnode->next = NULL;
  if(head == NULL){
    head = tail = newnode;
  }
 else{
   
    tail->next = newnode ;
    newnode ->pre = tail;
    newnode -> next = NULL;
    tail = newnode;
 }

  if( head == NULL){
  }
 
}




// Display function
void display(struct node *head ){

 struct node * temp;
if(head==NULL){

   printf("List is empty");
   return ;

    }
else{
    
    temp = head ;
    while(temp!=NULL){
    printf("%d \t", temp->data);
    temp = temp->next;
    }
    printf("\n");

}

}






int main(){

while(1){
int choice ;
printf("\n1 for  insert at the  beining ");
printf("\n2 for  insert at the  end ");
printf("\n3 for  insert at given location ");
printf("\n4 for delete from begining");
printf("\n5 for delete from end");
printf("\n6 for delete from given position");
printf("\n7 for Dispaly");
printf("\n8 for print the lenth of the linked list ");
printf("\n9 for exit"  );
printf("\n10 for revers the link list");

printf("\n Enter your choice: ");
scanf("%d",&choice);

switch(choice){

case 1:
  insert_begining();
break; 

case 2 :
insert_end();
break;

case 3:
// head= insert_given_loc(head);
break;

case 4:
// head= delete_begining(head);
break;

case 5:
// head = delete_end(head);
break;
case 6:
// head = delete_given_loc(head);
break;

case 7:
display(head);
break;

case 8:

// int len = count_length(head);
// printf("Length of the list is %d" , len);
break;

case 9:
exit(1);


case 10 :
//  head = reversal(head);
 break;
}

}




    return 0 ;
}