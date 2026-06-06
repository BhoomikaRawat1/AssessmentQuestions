// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* insert(struct node* head,int val){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        return newnode;
    }
    struct node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
void display(struct node* head1,struct node* head2){
    struct node* temp1=head1;
      struct node* temp2=head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
            printf("%d ",temp1->data);
             temp1=temp1->next;
        }
        else{
            printf("%d ",temp2->data);
              temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
           printf("%d ",temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
           printf("%d ",temp2->data);
              temp2=temp2->next;
      
    }
}
int main(){
    struct node* head1=NULL;
    struct node* head2=NULL;
    int n1,n2,val1,val2;
    printf("enter no of nodes");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&val1);
        head1=insert(head1,val1);
    }
    printf("enter no of nodes");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&val2);
       head2= insert(head2,val2);
    }
    display(head1,head2);
    return 0;
}
