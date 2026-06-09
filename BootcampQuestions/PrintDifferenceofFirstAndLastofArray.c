#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter no of elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff;
     for(int i=0;i<n;i++){
      diff=arr[0]-arr[n-1];
    }
    printf("%d",diff); 
}