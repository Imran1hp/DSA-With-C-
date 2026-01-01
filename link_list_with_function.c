#include <stdio.h>
#include <stdlib.h>

struct node
{

int data ;
struct node * next ;

};


int count_length(struct node *head)
{

 struct node * temp ;
 int count =0 ;
 temp = head ;
  while(temp!=NULL){
    temp = temp->next;
    count++;
  }
return count ;

}




struct node *insert_begining(struct node *head)
{

struct node * newnode , *temp ;

newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter th value of the node: ");
scanf("%d",&newnode->data);

if(head == NULL)
{
head = newnode;
newnode-> next =NULL; 
}

else
{
newnode-> next = head;
head = newnode;
} 

return head;

}






struct node * insert_end(struct node * head)
{
struct node *newnode, *temp;

newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the value of the node: ");
scanf("%d",&newnode->data);
newnode->next = NULL;

if( head == NULL){

head = newnode;
}
else{
temp = head ;
while ( temp->next != NULL){
    temp = temp->next;
}
temp->next = newnode;

}
return head;
}


struct node * insert_given_loc(struct node *head)
      
{
  int position , i = 1;
  struct node *newnode , *temp ;

  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the position where node is inserted: ");
  scanf("%d" ,&position);
  int length = count_length(head);

  if (length < position){
     
    printf("Invalit postion");

  }
  else
  {
    temp = head;
    while( i< position)
    {
        temp  = temp->next;
        i++;
    }
    printf("Enter the value of the node: ");
    scanf("%d",&newnode->data);

    newnode->next =temp->next;
    temp->next = newnode;

  }

  return head ;
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

case 1:
 head = insert_begining(head);
break; 

case 2 :
head = insert_end(head);
break;

case 3:
head= insert_given_loc(head);
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