#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows and columns");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("Enter matrix elements");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=i+1;j<r;j++){
           int temp=mat[i][j];
           mat[i][j]=mat[j][i];
           mat[j][i]=temp;
        }
    }
    for(int i=0;i<r;i++){
        int start=0;
        int end=c-1;
           while(start<end){
            int temp=mat[i][start];
            mat[i][start]=mat[i][end];
            mat[i][end]=temp;
            start++;
            end--;
           }
        }
        for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
      printf("\n");
     }
     return 0;
  }

