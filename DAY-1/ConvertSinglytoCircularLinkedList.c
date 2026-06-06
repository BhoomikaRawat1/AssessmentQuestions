#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* insert(struct node* head,int val){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        return newnode;
    }
    while(temp->next!=NULL){
       temp= temp->next;
    }
    temp->next=newnode;
    return head;
}
void display(struct node* head)
{
    struct node* temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct node* convertintoCircular(struct node* head){
   struct node* temp=head;
   
   while(temp->next!=NULL){
    temp=temp->next;
     }
     temp->next=head;
     return head;
}
void displayCircular(struct node* head)
{
    if(head == NULL)
        return;

    struct node* temp = head;

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("\n");
}
int main(){
    int val,n;
    struct node* head=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        head=insert(head,val);
    }
       printf("Singly Linked List:\n");
      display(head);
      head= convertintoCircular(head);
      printf("Circular Linked List:\n");
     displayCircular(head);
    
}





















