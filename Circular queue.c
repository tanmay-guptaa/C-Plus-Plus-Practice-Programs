#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enqueue(int *);
void dequeue(int *);
void traverse(int *);
int front=-1;
int rear=-1;
int capacity;
void enqueue(int *queue)
{
    int item;
    if((rear+1)%capacity==front)
        printf("Queue Overflow");
    else
    {
        printf("Enter Item\n");
        scanf("%d",&item);
        rear=(rear+1)%capacity;
        queue[rear=item];
        if(front==-1)
            front++;
            printf("Item Enqueued Successfully");

    }
}
void dequeue(int *queue)
{
    int item;
    if(front==-1)
        printf("Queue Underflow");
    else
    {
        item=queue[front];
        if(front==rear)
            front=rear=0;
        else
        {
            front=(front+1)%capacity;
        }
        printf("Deleted Item %d\t",item);
        printf("Item Dequeue Successfully");
    }

}
void traverse(int *queue)
{
    int i;
    if(front==-1)
        printf("Queue Empty");
    else
    {
        printf("Queue Elements Are\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
        if(rear<front)
        {
            for(i=front;i<capacity;i++)
                printf("%d\t",queue[i]);
            for(i=front;i<=rear;i++)
                printf("%d\t",queue[i]);
        }
    }
}
void main()
{
    int *queue;
    int choice;
    printf("Enter Capacity Of Queue\n");
    scanf("%d",&capacity);
    queue=(int*)malloc(sizeof(int)*capacity);
    while(1)
    {
        system("cls");
        printf("Press.\n1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit\nEnter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue(queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            traverse(queue);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!");
        }
    }
    getch();
}
