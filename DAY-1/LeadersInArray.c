#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[n-1];
    printf("Leaders are: %d ", max);
    for(int i=n-2;i>=0;i--){
        if(arr[i] > max){
            max = arr[i];
            printf("%d ", arr[i]);
        }
    }
    return 0;
}