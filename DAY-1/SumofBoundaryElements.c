#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows and columns");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of array");
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<c;j++){
            sum=sum+arr[0][j];
        }
    for(int i=1;i<r;i++){
            sum=sum+arr[i][c-1];
        }
    for(int j=c-2;j>=0;j--){
            sum=sum+arr[r-1][j];
        }
     for(int i=r-2;i>0;i--){
            sum=sum+arr[i][0];
        }
    printf("sum of boundary elements of array is %d",sum);
      return 0;
}