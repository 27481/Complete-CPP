#include<stdio.h>

void display(int arr[], int size){
    // code for traversal 
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int indDeletion(int arr[], int size, int element, int capacity, int index){
    // code for deletion 
    if(size>=capacity){
           return -1;
    }
    for(int i=index; i<size-1; i--){
        arr[i]= arr[i+1];
    }
    arr[index]=element;
    return 1;
}

int main(){
    int arr[100]={7, 8, 12, 27, 88};

    int size=4, element=45, capacity=100, index=3;


    indDeletion(arr, size, element, capacity, index);
    size-=1;
    display(arr, size);    

    return 0;
}