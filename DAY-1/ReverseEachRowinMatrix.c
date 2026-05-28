#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows and columns");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    printf("enter matrix elements");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        int start=0;
        int end=c-1;
        while(start<end){
            int temp=matrix[i][start];
            matrix[i][start]=matrix[i][end];
            matrix[i][end]=temp;
            start++;
            end--;
        }
     }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}