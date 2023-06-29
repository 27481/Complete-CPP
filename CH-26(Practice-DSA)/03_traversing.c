#include<stdio.h>
#include<stdlib.h>


// making struct node structure to make 2 divsions in linked list 
struct node{
    int data;
    struct node *next;
};

// Making a function to traverse the linked list 
void traverseLinkedlist(struct node*ptr){
    while(ptr!=NULL){
        printf("Element is :%d\n", ptr->data);
        ptr=ptr->next;
    }
};
int main(){
    // making pointers of struct node type 
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocating memory in the heap not in stack because it is a dynamic memory allocation by using malloc function aka memory allocation function
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    // linking first head node with second node
    head->data=2;
    head->next=second;

    // linking second node with third node
    second->data=1;
    second->next=third;

    // linking third node with fourth node
    third->data=0;
    third->next=fourth;

    // linking fourth node to null 
    fourth->data=0;
    fourth->next=NULL;

    // now passing head pointer of struct node type into the function for the traversal

    traverseLinkedlist(head);
    return 0;
}