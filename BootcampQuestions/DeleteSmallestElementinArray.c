#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      int smallest=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]<smallest){
        smallest=arr[i];
       }
    }
    
     for(int i=0;i<n;i++){
        if(arr[i]==smallest){
            continue;
        }
        printf("%d ",arr[i]);
    }
   return 0;
}