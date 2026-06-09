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
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node*  sumEven(struct node* head){
    struct node* curr=head;
    struct node* temp;
    while(curr!=NULL && curr->next!=NULL){
        if((curr->data+curr->next->data)%2==0){
            temp=curr->next;
            curr->next=temp->next;
            free(temp);
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
int main(){
    struct node* head=NULL;
    int n,val;
    printf("enter no of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        head=insert(head,val);
    }
    printf("Before removing node whose sum is even\n");
    display(head);
    
    head=sumEven(head);
    printf("After removing node whose sum is even\n");
    display(head);
return 0;
}





















