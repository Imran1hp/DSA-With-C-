#include <stdio.h>
#include <stdlib.h>

struct node{

    int data ;
    struct node * next;
};




int main(){

struct node * head , *newnode , *temp;
head = NULL;

int choice = 1;

while( choice){

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be insert: ");
    scanf("%d" , &newnode-> data);
    newnode->next = NULL;
    if (head == NULL){
        head = temp =  newnode;
    }
    else{
        temp -> next = newnode;
        temp = newnode;

    }
    printf(" Do you want to make another node (1/0): ");
    scanf("%d" , &choice);
}

temp = head ;
 while(temp !=NULL){

    printf("%d \t " ,temp->data );
    temp = temp->next;

 }

    return 0;
}