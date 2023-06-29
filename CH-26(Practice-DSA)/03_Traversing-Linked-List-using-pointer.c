#include<stdio.h>
#include<stdlib.h>

// Making struct node so that one node can have 2 parts ie data part and another part containing address of next node 
struct node
{
    int data;
    struct node*next;
};

//! function to traverse the linked list 
void traverseLinkedlist(struct node*ptr){
    while(ptr!=NULL){
        printf("Element is:%d\n", ptr->data);
        ptr=ptr->next;
    }
};

int main(){
    // Making pointers of struct node type 
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    // Allcating space in heap dynamically using dynamic memory allocation i.e malloc() function
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Linking previous node to the next node and last node to NULL

    // Linking first node i.e head node with 
    head->data=2;
    head->next=second;

    // Linking second node with third node 
    second->data=1;
    second->next=third;

    // Linking third node with fourth node 
    third->data=0;
    third->next=fourth;

    // Linking 4th node's data part to the value and *next pointer to point to NULL
    fourth->data=0;
    fourth->next=NULL;

    //Now passing head pointer of struct node type into the function for the traversal 
    traverseLinkedlist(head);
    return 0;
}