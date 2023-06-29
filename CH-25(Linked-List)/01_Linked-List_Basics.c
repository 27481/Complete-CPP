
// malloc is a method or a function which is going to return a void pointer to the starting address of that memory block in heap block 

//! The malloc() function stands for memory allocation. It is a function which is used to allocate a block of memory dynamically. It reserves memory space of specified size and returns the null pointer pointing to the memory location. The pointer returned is usually of type void. It means that we can assign malloc function to any pointer.


#include<stdio.h>

struct node{
    int data;
    struct node * next;   // self referencing structure  ie it is pointing to another node of same type  
};


int main(){

    return 0;
}

//! Self-refrencing structure means when a strucutre is referencing another structure of the same type  ie struct node *p