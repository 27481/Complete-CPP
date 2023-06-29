#include<stdio.h>
#include<stdlib.h>

// * Linked List Creation + Traversal 
// ! To make a linked List we have to first make a head node of it  

struct node
{
    int data;
    struct node*next;   // self referencing structure   
};

//* function to traverse the linked list

void linkedListraversal(struct node*ptr){
    while(ptr!=NULL){
    printf("Element in %d\n ", ptr->data);
    ptr=ptr->next;
    }
};

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    // Allocate memory for nodes in linked list in heap not in stack because it 
    // is dynamic memory allocation

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // link first and second nodes
    head->data=7;
    head->next=second;

    // link second and third node
    second->data=11;
    second->next=third;
  
    // Link third and fouth node 
    third->data=41;
    third->next=fourth;

    // Terminate the list at the fourth node  
    fourth->data=66;
    fourth->next=NULL;

    linkedListraversal(head);
    return 0;
}
// Time complexity for traversal of linked list is bigO(n)
