#include <stdio.h>
#include <stdlib.h>


struct node{
  int data ;
  struct node *next;
};

struct node *tail = NULL;

// count the length
int count_length(){
    if (tail == NULL)
        return 0;

    struct node *temp = tail->next;
    int count = 1;

    while (temp->next != tail->next){
        temp = temp->next;
        count++;
    }
    return count;
}

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

// Insert at given loction
void insert_given_loc(){
 struct node *newnode , *temp ;
 int pos , i=1;

printf("Enter the position: ");
scanf("%d",&pos);
int len = count_length();

if(pos <1 || pos >len+1){
    printf("Invalid position ");
}
else{
    if (pos ==1){
        insert_begining();
    }
    else if(pos ==len+1){
        insert_end();
    }
    else{

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d",&newnode->data);
        temp = tail->next;
        while(i <pos-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

}

// Delete from the begining 

void delete_begining(){
struct node *temp ;
if(tail==NULL){
    printf("list is empty");
    return ;
}
 temp = tail->next ;
if (tail == tail->next){
    tail = NULL;
    free(temp);
}
else{
   
    temp= temp->next;
    free(tail->next);
    tail->next = temp;
}
printf("Deleted from begining");

}
// delete from end
void delete_end(){
struct node *temp , *pre_node;

if(tail==NULL){
    printf("List is empty");
 return ;
}
pre_node = temp = tail->next;
if(tail==tail->next){

    free(temp);
    tail =NULL;
   

}
else{
    while(temp->next != tail->next){
        pre_node = temp;
        temp = temp->next;
    }
    pre_node->next = tail->next;
    free(temp);
    tail= pre_node;
}

printf("Deleled from End");

}





// delete from given location

   void delete_given_loc(){

    if(tail == NULL){
        printf("List is empty");
        return;
    }

    int pos, i = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);

    int len = count_length();

    if(pos < 1 || pos > len){
        printf("Invalid position");
        return;
    }

    if(pos == 1){
        delete_begining();
    }
    else if(pos == len){
        delete_end();
    }
    else{
        struct node *temp, *pre_node;
        pre_node = tail->next;   // first node

        while(i < pos - 1){
            pre_node = pre_node->next;
            i++;
        }

        temp = pre_node->next;   // node to delete
        pre_node->next = temp->next;
        free(temp);

        printf("Deleted from position %d", pos);
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
insert_given_loc();
break;

case 4:
 delete_begining();
break;

case 5:
 delete_end();
break;
case 6:
delete_given_loc();
break;

case 7:
display();
break;

case 8:

int len = count_length();
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