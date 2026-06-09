#include <stdio.h>
#define max 10
int top = -1;
int stack[max];
void push(int val)
{
    if (top == max - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top] = val;
        printf("Value %d successfully pushed in stack\n",val);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        int item=stack[top--];
        printf("%d\n", item);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack underflow");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

}
void peek()
{
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}
int main()
{
    int  val;
    int choice;
     printf("Menu Driven program\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.Display\n");
        printf("5.Exit\n"); 
    while (1)
    {
       

        printf("Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter value to push");
                scanf("%d", &val);
                push(val);
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
            return 0;
            break;
            default:
            printf("Invalid choice");
        }
    }
    return 0;
}










