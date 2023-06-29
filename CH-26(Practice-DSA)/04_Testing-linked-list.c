#include<stdio.h>
#include<stdlib.h>
// creating a linked list 

//! writing a function to traverse the linked list 

void traverseLinkedlist(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr=ptr->next;
    }
}

struct node{
    int data;
    struct node *next;
};
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
 
    // Allocating  memory dynamically in the heap using malloc function so that new nodes can be created 

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // Linking nodes now so that linked list can be made 

    // linking the head node with second 
    head->data=1;
    head->next=second;

    // Linking the second node with third 
    second->data=2;
    second->next=third;

    // Linking the third node with fourth
    third->data=3;
    third->next=fourth;

    // terminating the fourth node with NULL 
    fourth->data=3;
    third->next=NULL;

    // traverseLinkedlist(head);
    return 0;
}