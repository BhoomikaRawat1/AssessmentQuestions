#include<stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = ch;
    printf("%c pushed successfully\n", ch);
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element: %c\n", stack[top--]);
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top element: %c\n", stack[top]);
}

void display()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%c ", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice;
    char ch;

    while(1)
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter character: ");
                scanf(" %c", &ch);
                push(ch);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program Ended\n");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}