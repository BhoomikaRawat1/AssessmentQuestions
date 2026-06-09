#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows and columns");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of rows and columns");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}