#include<stdio.h>
int main(){
    int n;
    printf("Enter elements of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0;i<n;i++){
        if(arr[mid]==0){
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  return 0;
}