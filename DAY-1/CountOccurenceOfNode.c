#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* insert(struct node* head,int val){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
    return newnode;
}
void print(struct node* head,int key){
    struct node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(key==temp->data){
            count++;
        }
       temp= temp->next;
    }
    printf("%d",count);
}
int main(){
   int n,val,key;
   struct node* head=NULL;
   printf("Enter no of nodes");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&val);
    head=insert(head,val);
   }
   printf("Enter key");
   scanf("%d",&key);
   print(head,key);
   return 0;
  
}






