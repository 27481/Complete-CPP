#include<stdio.h>
// Linear Search is done by Array Traversal works on both sorted and unsorted array 
    int linearSearch(int arr[],int size, int element){
        for(int i=0; i<size; i++){
            if(arr[i]==element)
            return i;
        }
        return -1;
    }
int main(){
    int element;
    int arr[]={1,2,3,4,5,3544,65,56,32,12};
    int size = sizeof(arr)/sizeof(int);// using sizeof() operator will give us size
    printf("Enter the element you want to search in the array:\n");
    scanf("%d", &element);

    int searchIndex = linearSearch(arr,size, element);
    printf("The element %d is was at index %d \n", element, searchIndex);
    return 0;
}