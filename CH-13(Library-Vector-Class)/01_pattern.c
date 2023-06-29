#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, len, start, end;
    int i, j;
    scanf("%d", &n);
    start=0;
    end=len-1;
    int a[len][len];
    
    while(n!=0){
        for(i=start; i<=end; i++){
            for(j=start; j<=end; j++){
                if(i==start || i==end || j==start || j==end){
                    a[i][j]=n;
                }
            }
        }
        start++;
        end--;
        n--;
    }

    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
