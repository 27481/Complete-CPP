 #include<stdio.h>


// making a function to display an array  
void display(int a[], int n){
    // Traversal of an array 
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
};
int main(){
    int a[100]={1,2,6,6,78};
    display(a, 4);
    
       
    return 0;
}