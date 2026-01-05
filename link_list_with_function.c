#include <stdio.h>
#include <stdlib.h>
// struct node
struct node
{

int data ;
struct node * next ;

};
//  count the length of the list

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


//  inser at begining

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




//  insert at the end

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



// insert at any given localtion
struct node * insert_given_loc(struct node *head)
{
    int position, i = 1;
    struct node *newnode, *temp;

    printf("Enter the position where node is inserted: ");
    scanf("%d", &position);

    int length = count_length(head);
    if (position < 1 || position > length + 1){
        printf("Invalid position\n");
        return head;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of the node: ");
    scanf("%d", &newnode->data);

    if (position == 1){
        newnode->next = head;
        head = newnode;
        return head;
    }

    temp = head;
    while (i < position - 1){
        temp = temp->next;
        i++;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}



//  Delete a node from begining

struct node *delete_begining(struct node *head){
 
 struct node * temp ;

 if( head == NULL){
 printf("List is already empty\n");

}
else{
temp = head ;
temp = head->next;
head = temp ;
free(temp);
printf("Delete from the Begining");
}
return head ;
}

// Detele from the end 


struct node * delete_end(struct node *head)
{
struct node *temp , *pre_node;

if (head == NULL){
printf("List is empty\n");
return NULL;
}

if (head->next == NULL){
  free(head);
  return NULL;
 
}
else{
  temp = pre_node = head;
  while (temp->next != NULL){
    pre_node = temp ;
    temp = temp->next;
  }
  pre_node->next = NULL;
  free(temp);
  printf("Delete from the End");
}
  return head ;
}


// Delete from any given location 

struct node *delete_given_loc(struct node*head)
{
    struct node *temp , *pre_node;
    int pos, i=1;

    if (head == NULL){
        printf("List is empty\n");
        return head;
    }

    printf("Enter the position to be Deleted: ");
    scanf("%d",&pos);

    int length = count_length(head);
    if (pos < 1 || pos > length){
        printf("Invalid Position\n");
        return head;
    }

    if (pos == 1){
        temp = head;
        head = head->next;
        free(temp);
        printf("Deleted first node\n");
        return head;
    }

    temp = head;
    while (i < pos){
        pre_node = temp;
        temp = temp->next;
        i++;
    }

    pre_node->next = temp->next;
    free(temp);
    printf("Deleted position %d\n", pos);

    return head;
}


//  Reversal of the linked list 

struct node *reversal( struct node *head){

struct node *pre_node , *current_node , *next_node;
pre_node =NULL;
current_node  = next_node = head ;

while(next_node !=NULL){
 next_node =next_node->next;
 current_node->next = pre_node;
 pre_node = current_node;
 current_node = next_node;
}

head = pre_node ;



  return head;
}












// Dislay the Linked list

void display(struct node *head)
{
    struct node *search = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (search != NULL) {
        printf("%d \t", search->data);
        search = search->next;
    }
    printf("\n");
}


int main(){

struct node * head;
head = NULL ;

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
 head = insert_begining(head);
break; 

case 2 :
head = insert_end(head);
break;

case 3:
head= insert_given_loc(head);
break;

case 4:
head= delete_begining(head);
break;

case 5:
head = delete_end(head);
break;
case 6:
head = delete_given_loc(head);
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
 head = reversal(head);
 break;
}

}



return 0;

}