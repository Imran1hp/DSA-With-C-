#include <stdio.h>
#include <stdlib.h>


struct node{
  int data ;
  struct node *pre;
  struct node *next;
};

struct node *head =NULL,*tail = NULL;

// count the length
int count_length(struct node *head ){
struct node *temp;
int count = 0;
temp = head ;
while(temp!=NULL){
 temp = temp->next;
 count++;

}
return count;
}


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

//  insert at given location 

void insert_given_loc (){
struct node * temp , *newnode ;
int len = count_length(head);
int i = 1 , pos;
printf("Enter the position: ");
scanf("%d" , &pos);
if( pos>len+1 || pos <1 ){
 printf("Invail position ");
 return ;
}

else{
  if(pos == 1){

    insert_begining();

  }
  else if(pos =len+1){
    insert_end();

  }
  else{
    temp =head;
    while(i<pos-1){
      temp = temp->next;
      i++;
    }
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the value: ");
  scanf("%d" ,&newnode->data);
  newnode->pre = temp;
  newnode->next = temp->next;
  temp->next = newnode;
  newnode ->next->pre = newnode;
  }

}
}

//  Detele at the begining 

void delete_begining(){
struct node *temp;
if (head == NULL){

  printf("List is empty");
  return ;
}
else{
  if(head == tail){
    free(head);
    head = NULL;
  }
  else{
  temp=head;
  head = head->next;
  head->pre = NULL;
  free(temp);
  }
printf("Delete from the begining");
}

}


// Delete from the end
void delete_end(){

  struct node *temp;
if(head == NULL){

  printf("List is empty");
}
else{
 if(tail->pre ==NULL){

  free(tail);
  return ;
}
else{
  temp = tail;
  tail = tail->pre;
  tail->next = NULL;
  free(temp);
  
}
printf("Delete from the end");


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
    head=NULL;
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
insert_given_loc();
break;

case 4:
 delete_begining();
break;

case 5:
 delete_end();
break;
case 6:
// head = delete_given_loc(head);
break;

case 7:
display(head);
break;

case 8:

int len = count_length(head);
printf("Length of the list is %d" , len);
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