#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array"); 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    printf("Largest element in array is %d",largest);
    return 0;
}