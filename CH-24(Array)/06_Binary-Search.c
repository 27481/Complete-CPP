#include<stdio.h>

int binarySearch(int arr[], int size, int element){
    int low,mid,high;
    low =0;
    high=size-1;
    // Start searching
    // Keep Searching untill low and high converses  
    while(low<=high)
   { 
    mid=(low+high)/2;
    if(arr[mid]==element) 
        return mid;
    if(arr[mid]<element){
        low = mid+1;
    }
    else high = mid-1;
   }
// Searching ends
return -1;
};

int main(){
    // Unsorted array for linear search
    int arr[] = {1,3,5,56,3,23,5,4,54,34,56};
    int size=sizeof(arr)/sizeof(int);

    int element;
    printf("Enter the element you want to search in the array:\n");
    scanf("%d", &element);

    int search = binarySearch(arr, size, element);

    printf("The element %d was found at index %d \n", element, search);
    return 0;
}