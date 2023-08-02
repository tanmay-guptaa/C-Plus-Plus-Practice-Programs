#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int capacity;
void enQueueFront(int *queue)
{
    int item;
    if(front==0)
        printf("Queue Overflow.");
    else
    {
        printf("Enter Item : ");
        scanf("%d",&item);
        if(front==-1)
        {
            front++;
            rear++;
            queue[front]=item;
        }
        else
        {
            front--;
            queue[front]=item;
        }
        printf("Item Successfully Enqueued Using Front End.");
    }
}
void enQueueRear(int *queue)
{
    int item;
    if(rear==capacity-1)
        printf("Queue Overflow.");
    else
    {
        printf("Enter Item : ");
        scanf("%d",&item);
        if(rear==-1)
        {
            front++;
            rear++;
            queue[rear]=item;
        }
        else
        {
            rear++;
            queue[rear]=item;
        }
        printf("Item Successfully Enqueued Using Rear End.");
    }
}
void deQueueFront(int *queue)
{
    int item;
    if(front==-1)
        printf("Queue Underflow.");
    else
    {
        item=queue[front];
        if(front==rear)
            front=rear=-1;
        else
            front++;
        printf("Deleted Item : %d\n",item);
        printf("Item Successfully Dequeued Using Front End.");
    }
}
void deQueueRear(int *queue)
{
    int item;
    if(rear==-1)
        printf("Queue Underflow.");
    else
    {
        item=queue[rear];
        if(rear==front)
            front=rear=-1;
        else
            rear--;
        printf("Deleted Item : %d\n",item);
        printf("Item Successfully Dequeued Using Rear End.");
    }
}
void queueTraverse(int *queue)
{
    int i;
    if(front==-1)
        printf("Queue Empty.");
    else
    {
        printf("The Queue Elements Are\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}
void main()
{
    int *queue;
    int choice;
    printf("Enter Capacity of Queue : ");
    scanf("%d",&capacity);
    queue=(int*)malloc(sizeof(int)*capacity);
    printf("Press\n1. Input Restricted Deque\n");
    printf("2. Output Restricted Deque\nEnter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        while(1)
        {
            system("cls");
            printf("----- Double Ended Queue -----");
            printf("\nPress.\n");
            printf("1. Enqueue Rear End.\n2. Dequeue Front End.\n");
            printf("3. Dequeue Rear End.\n4. Queue Traverse\n");
            printf("5. Exit\n");
            printf("Enter Your Choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                enQueueRear(queue);
                break;
            case 2:
                deQueueFront(queue);
                break;
            case 3:
                deQueueRear(queue);
                break;
            case 4:
                queueTraverse(queue);
                break;
            case 5:
                exit(0);
            default:
                printf("Sorry | Invalid Choice.");
            }
            getch();
        }
    case 2:
        while(1)
        {
            system("cls");
            printf("----- Double Ended Queue -----");
            printf("\nPress.\n");
            printf("1. Enqueue Rear End.\n2. EnQueue Front End.\n");
            printf("3. Dequeue Front End.\n4. Queue Traverse\n");
            printf("5. Exit\n");
            printf("Enter Your Choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                enQueueRear(queue);
                break;
            case 2:
                enQueueFront(queue);
                break;
            case 3:
                deQueueFront(queue);
                break;
            case 4:
                queueTraverse(queue);
                break;
            case 5:
                exit(0);
            default:
                printf("Sorry | Invalid Choice.");
            }
            getch();
        }
    default:
        printf("Sorry | Invalid Choice | Try Again.");
    }
}
