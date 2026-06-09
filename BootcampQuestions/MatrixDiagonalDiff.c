#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of array:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
        int i=0;int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
            i++;
        }
        
        int sum1=0;
       for(int i=0;i<n;i++){
             sum1 += arr[i][n-1-i];
        }
        int diff=sum1-sum;
    printf("difference is %d",diff);
    return 0;
}