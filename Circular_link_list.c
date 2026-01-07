#include <stdio.h>
#include <stdlib.h>


struct node{
  int data ;
  struct node *next;
};

struct node *tail = NULL;

// count the length
int count_length(struct node *tail ){
struct node *temp;
int count = 0;
temp = tail->next ;
while(temp->next!= tail->next ){
 temp = temp->next;
 count++;
}}

// insert at the begining

void insert_begining(){


    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&newnode->data);
if (tail==NULL){
    tail =newnode;
    tail->next = newnode;
    
}
else{
    newnode->next = tail->next;
    tail->next = newnode;
}

}



// insert at the End

void insert_end(){

struct node *newnode;

newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the value: ");
scanf("%d",&newnode->data);
newnode->next = NULL;
if(tail== NULL){

 tail=newnode;
 tail->next = newnode;

}
else{
   newnode->next = tail->next;
   tail->next = newnode;
   tail = newnode;
}

}




void display(){
    struct node *temp;
    if (tail ==NULL){

        printf("List is Empty");
    }
    else{
    }
    temp = tail->next;
    while( temp->next != tail->next){
        printf("%d \t",temp->data);
        temp = temp->next;
    
    }
    printf("%d \t",temp->data);
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
// insert_given_loc();
break;

case 4:
//  delete_begining();
break;

case 5:
//  delete_end();
break;
case 6:
// delete_given_loc(head);
break;

case 7:
display();
break;

case 8:

int len = count_length(tail);
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