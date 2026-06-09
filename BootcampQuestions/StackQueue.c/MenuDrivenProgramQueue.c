#include <stdio.h>
#define max 10
int front = -1;
int  rear = -1;
int queue[max];
void Enqueue(int item)
{
    if (rear == max - 1)
    {
        printf("queue is overflow");
    }
    else if (front == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else
    {
        queue[++rear] = item;
    }
}
void Dequeue()
{
    if (front == -1)
    {
        printf("Queue is underflow");
    }
    else if (front == rear)
    {
        printf("%d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d\n" , queue[front]);
        front++;
    }
}
void Peek()
{
    if (front == -1)
    {
        printf("Queue is underflow");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}
void Display(){
    if(front==-1){
        printf("Queue is underflow");
        return;
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    int item,choice;
        printf("Menu Driven program\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.peek\n");
        printf("4.Display\n");
        printf("5.Exit\n"); 

        while(1){
            printf("Enter choice");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                printf("Enter value");
                scanf("%d",&item);
                Enqueue(item);
                break;
                case 2:
                Dequeue();
                break;
                case 3:
                Peek();
                break;
                case 4:
                Display();
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