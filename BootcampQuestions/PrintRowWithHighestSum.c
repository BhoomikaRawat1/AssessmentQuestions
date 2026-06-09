#include<stdio.h>
int main(){
    int r,c;
    printf("enter no of rows");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("enter no of elements");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=0;
    int rowindex;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
          sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            rowindex=i;
        }
    }
        for(int j=0;j<c;j++){
            printf ("%2d",arr[rowindex][j]);
        }
        return 0;
}