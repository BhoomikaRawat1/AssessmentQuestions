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

void removeDuplicate(struct node* head){
    struct node *curr, *runner, *temp;

    curr = head;

    while(curr != NULL){

        runner = curr;

        while(runner->next != NULL){

            if(curr->data == runner->next->data){
                temp = runner->next;
                runner->next = temp->next;
                free(temp);
            }
            else{
                runner = runner->next;
            }
        }

        curr = curr->next;
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
   removeDuplicate(head);
  
   display(head);
   return 0;
  
}

