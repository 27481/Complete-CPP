#include<stdio.h>
    // C program to apply LinearSearch in an Array 

    int linearSearch_fun(int arr[], int size, int element){
        for(int i=0; i<size; i++){
            if(arr[i]==element) return i;
        }
        return -1;
    }

int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
    printf("Enter the element of the array:\n);
    scanf("%d", &arr[i]);
    }


    int element;
    printf("Enter the element you want to search in the array :\n");
    scanf("%d", &element);

    int sizeOfArray=sizeof(arr)/sizeof(int);

    int linearSearch= linearSearch_func( arr, sizeOfArray, element);

    return 0;
}