#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* insert(struct node* head, int val) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL)
        return newnode;

    struct node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    return head;
}

void display(struct node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node* removeEveryKth(struct node* head, int k) {

    if(head == NULL || k <= 1)
        return NULL;

    int count = 1;
    struct node *curr = head, *prev = NULL;

    while(curr != NULL) {

        if(count % k == 0) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
        count++;
    }

    return head;
}

int main() {

    struct node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    head = insert(head, 8);

    printf("Original List:\n");
    display(head);

    head = removeEveryKth(head, 3);

    printf("After Removing Every 3rd Node:\n");
    display(head);

    return 0;
}