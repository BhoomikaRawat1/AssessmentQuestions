#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* insert(struct node* head, int val)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL)
    {
        return newnode;
    }

    struct node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    return head;
}
void removeduplicate(struct node* head){
    struct node* temp;
    struct node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
      if(curr->data==curr->next->data){
        temp=curr->next;
        // curr->next=curr->next->next;
        curr->next=temp->next;

        free(temp);
    }
    else{
        curr=curr->next;
    }
   }
}
void display(struct node* head)
{
    struct node* temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main(){
   int n,val;
   struct node* head=NULL;
   printf("Enter no of nodes");
   scanf("%d",&n);
   printf("Enter sorted nodes");
   for(int i=0;i<n;i++){
    scanf("%d",&val);
    head=insert(head,val);
   }
   removeduplicate(head);
  
   display(head);
   return 0;
  
}