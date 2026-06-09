#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    int max=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            count++;
        }
        else{
            count=1;
        }
        if(count>max){
        max=count;
        }
    }
  printf("Largest consecutive increasing frequency is %d",max);
  return 0;
}

